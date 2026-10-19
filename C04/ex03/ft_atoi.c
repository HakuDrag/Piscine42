/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:54:32 by callwood          #+#    #+#             */
/*   Updated: 2026/08/13 13:59:14 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	resultat;
	int	sig;

	sig = 1;
	i = 0;
	resultat = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = sig * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (resultat == 0)
			resultat = str[i] - '0';
		else
			resultat = (resultat * 10) + str[i] - '0';
		i++;
	}
	return (resultat * sig);
}

int	main(int ac, char **av)
{

	char	*c = av[1];
	printf("%d", ft_atoi(c));
	return (0);
}
