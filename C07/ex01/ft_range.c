/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 10:49:06 by callwood          #+#    #+#             */
/*   Updated: 2026/08/17 11:41:59 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
#include <stdio.h>
int main(void)
{
    int min = 6;
    int max = 10;
    int *arr = ft_range(min, max);

    if (!arr)
        return (1);

    for (int i = 0; i < (max - min); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return (0);
}*/
