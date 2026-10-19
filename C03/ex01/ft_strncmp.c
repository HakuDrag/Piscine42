/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:25:32 by callwood          #+#    #+#             */
/*   Updated: 2026/08/11 09:25:34 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i + 1 < n)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int     main(void)
{
        char    s1[] = "ABCD";
        char    s2[] = "ABHHNBV";
	int	n = 2;
        printf("%d", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
        return (0);
}
*/
