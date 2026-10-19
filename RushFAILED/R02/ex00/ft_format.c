/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:52:58 by callwood          #+#    #+#             */
/*   Updated: 2026/08/23 15:52:58 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_is_valid_number(char *number)
{
	int	i;

	if (!number || !number[0])
		return (0);
	i = 0;
	while (number[i])
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_mod(char *str)
{
	int	size;

	size = ft_strlen(str);
	if (size % 3 == 0)
		return (0);
	return (3 - (size % 3));
}

char	*ft_addzero(char *str, int nb)
{
	char	*nstr;
	int		i;
	int		j;

	nstr = (char *)malloc(sizeof(char) * (ft_strlen(str) + nb + 1));
	if (!nstr)
		return (NULL);
	i = 0;
	while (i < nb)
		nstr[i++] = '0';
	j = 0;
	while (str[j] != '\0')
		nstr[i++] = str[j++];
	nstr[i] = '\0';
	return (nstr);
}

void	ft_free_groups(char **groups, int i)
{
	int	j;

	if (!groups)
		return ;
	j = 0;
	while (j < i)
	{
		free(groups[j]);
		j++;
	}
	free(groups);
}
