/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 08:21:54 by callwood          #+#    #+#             */
/*   Updated: 2026/08/13 08:37:03 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_fibonacci(int index)
{
	int	i;
	int	st;
	int	nd;
	int	temp;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	st = 0;
	nd = 1;
	i = 0;
	while (i < index - 1)
	{
		temp = nd;
		nd = st + nd;
		st = temp;
		i++;
	}
	return (nd);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(8));
}*/
