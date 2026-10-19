/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:37:08 by callwood          #+#    #+#             */
/*   Updated: 2026/08/09 11:25:14 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char car);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (j == 0 && (i == 0 || i == y - 1))
				ft_putchar('A');
			else if (j == x - 1 && (i == 0 || i == y - 1))
				ft_putchar('C');
			else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
