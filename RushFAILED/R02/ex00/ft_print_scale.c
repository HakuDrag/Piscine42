/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:54:55 by callwood          #+#    #+#             */
/*   Updated: 2026/08/23 15:54:55 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_print_val(char *key, t_dict_entry *dict, int size, int *first)
{
	char	*value;

	value = ft_get_val(key, dict, size);
	if (!value)
		return (0);
	ft_print_space(first);
	ft_putstr(value);
	return (1);
}

int	ft_print_tens(char *str, t_dict_entry *dict, int size, int *first)
{
	char	temp[3];

	if (str[1] == '1')
		return (ft_print_val(str + 1, dict, size, first));
	if (str[1] != '0')
	{
		temp[0] = str[1];
		temp[1] = '0';
		temp[2] = '\0';
		if (!ft_print_val(temp, dict, size, first))
			return (0);
	}
	if (str[2] != '0')
	{
		temp[0] = str[2];
		temp[1] = '\0';
		if (!ft_print_val(temp, dict, size, first))
			return (0);
	}
	return (1);
}

int	ft_print_scale(int zeros, t_dict_entry *dict, int size, int *first)
{
	char	scale[100];
	int		i;

	scale[0] = '1';
	i = 1;
	while (i <= zeros)
		scale[i++] = '0';
	scale[i] = '\0';
	return (ft_print_val(scale, dict, size, first));
}
