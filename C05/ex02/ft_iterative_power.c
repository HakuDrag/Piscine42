/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 15:06:53 by callwood          #+#    #+#             */
/*   Updated: 2026/08/12 15:19:29 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultat;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	resultat = 1;
	while (i < power)
	{
		resultat = resultat * nb;
		i++;
	}
	return (resultat);
}
/*
int main(void)
{
	printf("%d", ft_iterative_power(5, 2));
}*/
