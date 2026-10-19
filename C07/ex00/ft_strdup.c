/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 10:18:04 by callwood          #+#    #+#             */
/*   Updated: 2026/08/17 10:48:11 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dup;

	if (src == NULL)
		return (NULL);
	size = 0;
	while (src[size] != '\0')
		size++;
	dup = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src;
	src = "Qwer";
	printf("%s", ft_strdup(src));
	return (0);
}*/
