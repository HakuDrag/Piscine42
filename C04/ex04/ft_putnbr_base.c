/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 14:03:03 by callwood          #+#    #+#             */
/*   Updated: 2026/08/19 09:20:41 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!str || str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		if (str[i] <= 32 || str[i] > 126)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_write_base(int nbr, char *base, int check)
{
	if (nbr >= check)
		ft_write_base((nbr / check), base, check);
	write( 1, &base[nbr % check], 1);	
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int check;

	n = nbr;
	check = ft_check_base(base);
	if (check == 0)
		return ;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	ft_write_base(n, base, check);
}

int	main(void)
{
	char *base = "ABCD01234567";
	ft_putnbr_base(0, base);
	return (0);
}
