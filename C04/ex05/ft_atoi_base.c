/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 09:22:26 by callwood          #+#    #+#             */
/*   Updated: 2026/08/19 10:20:09 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_check_base(char *base)
{
	int	i;
	int	j;

	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if ( base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int ft_get_index(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	resultat;
	int	check;
	int	index;

	resultat = 0;
	signe = 1;
	i = 0;
	check = ft_check_base(base);
	if ( check < 2)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while ((index = ft_get_index(str[i], base)) != -1)
	{
		resultat = (resultat * check) + index;
		i++;
	}
	return (resultat * signe);
}

int main(void)
{
	printf("Binaire (101010)       : %d (attendu: 42)\n", ft_atoi_base("  ---+-101010ab56", "01"));
	printf("Hexadécimal (2A)       : %d (attendu: 42)\n", ft_atoi_base("2A", "0123456789ABCDEF"));
	printf("Hexa minuscule (2a)    : %d (attendu: 42)\n", ft_atoi_base("   +---+2a", "0123456789abcdef"));
	printf("Octal (52)             : %d (attendu: 42)\n", ft_atoi_base("52", "01234567"));
	printf("Base personnalisée     : %d (attendu: 42)\n", ft_atoi_base("poney", "poneyvif"));
	printf("\n--- Tests d'erreurs (attendu: 0) ---\n");
	printf("Base invalide (+ dans base) : %d\n", ft_atoi_base("10", "0123+5"));
	printf("Base invalide (doublon)     : %d\n", ft_atoi_base("10", "0123455"));
	printf("Base trop courte            : %d\n", ft_atoi_base("10", "1"));
	printf("Chaîne invalide             : %d\n", ft_atoi_base("hello", "0123456789"));

	return (0);
}


