/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 11:42:22 by callwood          #+#    #+#             */
/*   Updated: 2026/08/05 11:42:36 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_num(int c)
{
	char	digital;

	digital = (c / 10) + '0';
	write(1, &digital, 1);
	digital = (c % 10) + '0';
	write(1, &digital, 1);
}

void	ft_print_comb2(void)
{
	int	premier;
	int	dernier;

	premier = 0;
	while (premier <= 98)
	{
		dernier = premier + 1;
		while (dernier <= 99)
		{
			ft_print_num(premier);
			write(1, " ", 1);
			ft_print_num(dernier);
			if (!(premier == 98 && dernier == 99))
				write(1, ", ", 2);
			dernier++;
		}
		premier++;
	}
}
