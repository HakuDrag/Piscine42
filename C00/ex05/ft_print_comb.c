/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 08:09:51 by callwood          #+#    #+#             */
/*   Updated: 2026/08/05 08:09:57 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a;
		while (++b <= '8')
		{
			c = b;
			while (++c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (!(a == '7' && b == '8' && c == '9'))
				{
					write(1, ", ", 2);
				}
			}
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
