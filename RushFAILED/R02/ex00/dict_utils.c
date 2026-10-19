/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vistockm <vistock@student.42belgium.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 16:06:34 by vistockm          #+#    #+#             */
/*   Updated: 2026/08/23 17:58:43 by vistockm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	is_space(char c)
{
	return (c == ' ');
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

char	*copy_string(char *str, int start, int len)
{
	char	*copy;
	int		i;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = str[start + i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	free_dictionary(t_dict_entry *entries, int count)
{
	int	i;

	if (entries == NULL)
		return ;
	i = 0;
	while (i < count)
	{
		free(entries[i].number);
		free(entries[i].word);
		i++;
	}
	free(entries);
}
