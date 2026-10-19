/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_load.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vistockm <vistock@student.42belgium.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 16:08:59 by vistockm          #+#    #+#             */
/*   Updated: 2026/08/23 17:50:01 by vistockm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	count_file_bytes(char *filename, int *size)
{
	int		fd;
	int		bytes;
	int		total;
	char	buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	total = 0;
	bytes = read(fd, buffer, 1024);
	while (bytes > 0)
	{
		total += bytes;
		bytes = read(fd, buffer, 1024);
	}
	close(fd);
	if (bytes < 0)
		return (0);
	*size = total;
	return (1);
}

int	read_file(char *filename, char *buffer, int size)
{
	int	fd;
	int	total;
	int	bytes;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	total = 0;
	while (total < size)
	{
		bytes = read(fd, buffer + total, size - total);
		if (bytes <= 0)
		{
			close(fd);
			return (0);
		}
		total += bytes;
	}
	close(fd);
	buffer[size] = '\0';
	return (1);
}

int	allocate_entries(char *buffer, t_dict_entry **entries, int *count)
{
	int	i;

	*count = count_entries(buffer);
	*entries = malloc(sizeof(t_dict_entry) * (*count));
	if (*entries == NULL)
		return (0);
	i = 0;
	while (i < *count)
	{
		(*entries)[i].number = NULL;
		(*entries)[i].word = NULL;
		i++;
	}
	return (1);
}

int	load_buffer(char *filename, char **buffer, int *size)
{
	if (!count_file_bytes(filename, size))
		return (0);
	*buffer = malloc(sizeof(char) * (*size + 1));
	if (*buffer == NULL)
		return (0);
	if (!read_file(filename, *buffer, *size))
	{
		free(*buffer);
		*buffer = NULL;
		return (0);
	}
	return (1);
}

int	load_dictionary(char *filename, t_dict_entry **entries, int *count)
{
	char	*buffer;
	int		size;

	*entries = NULL;
	*count = 0;
	if (!load_buffer(filename, &buffer, &size))
		return (0);
	if (!allocate_entries(buffer, entries, count))
	{
		free(buffer);
		return (0);
	}
	if (!parse_buffer(buffer, *entries))
	{
		free_dictionary(*entries, *count);
		*entries = NULL;
		*count = 0;
		free(buffer);
		return (0);
	}
	free(buffer);
	return (1);
}
