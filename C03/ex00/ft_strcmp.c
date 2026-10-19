/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 13:16:59 by callwood          #+#    #+#             */
/*   Updated: 2026/08/11 09:24:04 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
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
        int     n = 2;
        printf("%d", ft_strncmp(s1, s2, n));
        printf("%d", strncmp(s1, s2, n));
        return (0);
}
*/
