/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <allwood@student.42belgium.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 12:46:01 by callwood          #+#    #+#             */
/*   Updated: 2026/08/09 13:58:55 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = -1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			if (i == 0 && j == 0)
				ft_putchar('A');
			else if (j == x - 1 && i == y - 1 && i != 0 && j != 0)
				ft_putchar('A');
			else if ((j == 0 && i == y - 1) || (j == x - 1 && i == 0))
				ft_putchar('C');
			else if ((j > 0 && j < x - 1) && (i > 0 && i < y - 1))
				ft_putchar(' ');
			else
				ft_putchar('B');
		}
		ft_putchar('\n');
	}
}
