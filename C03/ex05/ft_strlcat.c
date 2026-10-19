/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 20:37:55 by callwood          #+#    #+#             */
/*   Updated: 2026/08/11 10:08:58 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size <= i)
		return (size + j);
	k = 0;
	while (src[k] != '\0' && (i + k) < (size - 1))
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}
/*
int	main(void)
{
	char	s1[50] = "waterloo";
	char	s2[] = " avenue beau voisin";
	printf("%u\n", ft_strlcat(s1, s2, 20));
	return (0);
}*/
