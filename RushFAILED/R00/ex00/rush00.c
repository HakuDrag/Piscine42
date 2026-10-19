/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jszczubi <jszczubi@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 09:46:46 by jszczubi          #+#    #+#             */
/*   Updated: 2026/08/09 16:10:56 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

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
			if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
				ft_putchar('o');
			else if ((i == 0 || i == y - 1) && (j != 0 && j != x - 1))
				ft_putchar('-');
			else if ((i != 0 && i != y - 1) && (j == 0 || j == x - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
