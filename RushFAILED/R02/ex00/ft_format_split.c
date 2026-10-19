/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:53:20 by callwood          #+#    #+#             */
/*   Updated: 2026/08/23 15:53:20 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	**ft_make_groups(char *str)
{
	int		i;
	int		j;
	char	**tab;

	tab = malloc(sizeof(char *) * (ft_strlen(str) / 3 + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		tab[j] = malloc(sizeof(char) * 4);
		if (!tab[j])
			return (ft_free_groups(tab, j), NULL);
		tab[j][0] = str[i];
		tab[j][1] = str[i + 1];
		tab[j][2] = str[i + 2];
		tab[j][3] = '\0';
		i += 3;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_format(char *str)
{
	int		nbz;
	char	*nstr;
	char	**tab;

	nbz = ft_mod(str);
	nstr = str;
	if (nbz != 0)
	{
		nstr = ft_addzero(str, nbz);
		if (!nstr)
			return (NULL);
	}
	tab = ft_make_groups(nstr);
	if (nbz != 0)
		free(nstr);
	return (tab);
}
