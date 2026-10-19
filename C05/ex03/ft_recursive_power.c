/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 15:20:05 by callwood          #+#    #+#             */
/*   Updated: 2026/08/12 15:35:38 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_recursive_power(int nb, int power)
{
	int	resultat;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	resultat = 1;
	resultat = resultat * nb;
	return (resultat * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(5, 2));
	return (0);
}*/
