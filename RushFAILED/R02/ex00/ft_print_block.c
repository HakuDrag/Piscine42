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

int	ft_dict_error(void)
{
	write(1, "Dict Error\n", 11);
	return (1);
}

void	ft_print_zero(t_dict_entry *dict, int size)
{
	int	first;

	first = 1;
	if (!ft_print_val("0", dict, size, &first))
		ft_dict_error();
	else
		write(1, "\n", 1);
}

int	ft_group_count(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_print_block(char *str, t_dict_entry *dict, int size, int *first)
{
	char	temp[2];

	if (str[0] != '0')
	{
		temp[0] = str[0];
		temp[1] = '\0';
		if (!ft_print_val(temp, dict, size, first))
			return (0);
		if (!ft_print_val("100", dict, size, first))
			return (0);
	}
	return (ft_print_tens(str, dict, size, first));
}

void	ft_process_print(char **tab, t_dict_entry *dict, int size)
{
	int	i;
	int	len;
	int	first;

	len = ft_group_count(tab);
	first = 1;
	if (len == 1 && tab[0][0] == '0' && tab[0][1] == '0'
		&& tab[0][2] == '0')
		return (ft_print_zero(dict, size));
	i = 0;
	while (i < len)
	{
		if (tab[i][0] != '0' || tab[i][1] != '0' || tab[i][2] != '0')
		{
			if (!ft_print_block(tab[i], dict, size, &first))
				return (ft_dict_error(), (void)0);
			if (len - i - 1 > 0 && !ft_print_scale((len - i - 1) * 3,
					dict, size, &first))
				return (ft_dict_error(), (void)0);
		}
		i++;
	}
	write(1, "\n", 1);
}
