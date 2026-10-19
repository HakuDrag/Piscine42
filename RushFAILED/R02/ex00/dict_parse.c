/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vistockm <vistock@student.42belgium.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 16:12:26 by vistockm          #+#    #+#             */
/*   Updated: 2026/08/23 17:55:41 by vistockm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	count_entries(char *buffer)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			count++;
		i++;
	}
	return (count + (i > 0 && buffer[i - 1] != '\n'));
}

int	get_number(char *line, int *pos, char **number)
{
	int	i;
	int	len;

	i = 0;
	if (!is_digit(line[i]))
		return (0);
	while (is_digit(line[i]))
		i++;
	len = i;
	while (is_space(line[i]))
		i++;
	if (line[i] != ':')
		return (0);
	*number = copy_string(line, 0, len);
	if (*number == NULL)
		return (0);
	*pos = i + 1;
	return (1);
}

int	get_word(char *line, int pos, char **word)
{
	int	start;
	int	len;

	while (is_space(line[pos]))
		pos++;
	start = pos;
	while (line[pos] && line[pos] != '\n')
	{
		if (!is_printable(line[pos]))
			return (0);
		pos++;
	}
	len = pos - start;
	while (len > 0 && is_space(line[start + len - 1]))
		len--;
	if (len == 0)
		return (0);
	*word = copy_string(line, start, len);
	if (*word == NULL)
		return (0);
	return (1);
}

int	parse_line(char *line, t_dict_entry *entry)
{
	int	pos;

	entry->number = NULL;
	entry->word = NULL;
	if (line[0] == '\0')
		return (1);
	if (!get_number(line, &pos, &entry->number))
		return (0);
	if (!get_word(line, pos, &entry->word))
	{
		free(entry->number);
		entry->number = NULL;
		return (0);
	}
	return (1);
}

int	parse_buffer(char *buffer, t_dict_entry *entries)
{
	int	i;
	int	start;
	int	count;

	i = 0;
	start = 0;
	count = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			buffer[i] = '\0';
			if (!parse_line(&buffer[start], &entries[count]))
				return (0);
			buffer[i] = '\n';
			start = i + 1;
			count++;
		}
		i++;
	}
	if (start < i)
		return (parse_line(&buffer[start], &entries[count]));
	return (1);
}
