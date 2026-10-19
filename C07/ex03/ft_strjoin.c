/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:31:29 by callwood          #+#    #+#             */
/*   Updated: 2026/08/18 13:42:35 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_totalsize(int size, char **strs, char *sep)
{
	int	i;
	int	cpt;
	int	sepcpt;

	i = 0;
	cpt = 0;
	sepcpt = ft_strlen(sep);
	while (i < size)
	{
		cpt = cpt + ft_strlen(strs[i]);
		if (i < size - 1)
			cpt = cpt + sepcpt;
		i++;
	}
	return (cpt);
}

char	*ft_strcat_join(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				dest[k++] = sep[j++];
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		totalsize;

	if (size <= 0)
	{
		res = (char *)malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	totalsize = ft_totalsize(size, strs, sep);
	res = (char *)malloc(sizeof(char) * (totalsize + 1));
	return (ft_strcat_join(size, strs, sep, res));
}
