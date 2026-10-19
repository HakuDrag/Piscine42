/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 12:39:47 by callwood          #+#    #+#             */
/*   Updated: 2026/08/12 15:06:19 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_iterative_factorial(int nb)
{
	int	resultat;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	resultat = 1;
	while (nb > 0)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);	
}*/
