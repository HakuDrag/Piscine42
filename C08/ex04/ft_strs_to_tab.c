/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 10:22:59 by callwood          #+#    #+#             */
/*   Updated: 2026/08/25 13:22:50 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	free_str(t_stock_str *str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (str[i].copy)
			free(str[i].copy);
		i++;
	}
	free(str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str;

	i = 0;
	str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		if (!str)
		{
			free_str(str, i);
			return (NULL);
		}
		i++;
	}
	str[i].str = 0;
	return (str);
}
