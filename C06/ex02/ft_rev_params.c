/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:31:30 by callwood          #+#    #+#             */
/*   Updated: 2026/08/13 15:51:29 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = ac -1;
	if (ac < 2)
		return (0);
	while (i > 0)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
