/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amerghic@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 15:35:40 by amerghic          #+#    #+#             */
/*   Updated: 2026/08/09 16:09:10 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char car);

void	print_char(int x, int y, int width, int height)
{
	if (x == 1 && y == 1)
		ft_putchar('/');
	else if (x == width && y == 1)
		ft_putchar('\\');
	else if (x == 1 && y == height)
		ft_putchar('\\');
	else if (x == width && y == height)
		ft_putchar('/');
	else if (y == 1 || y == height || x == 1 || x == width)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int width, int height)
{
	int	x;
	int	y;

	if (width <= 0 || height <= 0)
		return ;
	y = 1;
	while (y <= height)
	{
		x = 1;
		while (x <= width)
		{
			print_char(x, y, width, height);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
