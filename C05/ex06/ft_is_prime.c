/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 09:10:02 by callwood          #+#    #+#             */
/*   Updated: 2026/08/13 09:55:07 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_is_prime(int nb)
{
	int	rep;
	int	i;
	int	cpt;

	i = 1;
	cpt = 0;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		rep = nb % i;
		if (rep == 0)
			cpt++;
		i++;
	}
	if (cpt >= 2)
		return (0);
	return (1);
}
/*
int main (void)
{
	printf("%d", ft_is_prime(5));
}*/
