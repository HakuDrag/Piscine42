/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:54:32 by callwood          #+#    #+#             */
/*   Updated: 2026/08/23 15:54:32 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_get_val(char *key, t_dict_entry *dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (dict[i].number && ft_strcmp(dict[i].number, key) == 0)
			return (dict[i].word);
		i++;
	}
	return (NULL);
}

void	ft_print_space(int *first)
{
	if (!*first)
		write(1, " ", 1);
	*first = 0;
}
