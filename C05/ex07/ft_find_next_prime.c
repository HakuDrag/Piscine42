/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 09:55:58 by callwood          #+#    #+#             */
/*   Updated: 2026/08/13 11:01:11 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_find_next_prime(int nb)
{
	int	i;
	int	cpt;

	if (nb <= 1)
		return (2);
	while (nb > 2)
	{
		i = 2;
		cpt = 0;
		while (i <= nb / i && cpt == 0)
		{
			if (nb % i == 0)
				cpt++;
			i++;
		}
		if (cpt == 0)
			return (nb);
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(5));
	return (0);
}*/
