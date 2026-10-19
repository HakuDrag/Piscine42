/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:10:04 by callwood          #+#    #+#             */
/*   Updated: 2026/08/16 21:20:33 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*check que tout est <= 4 && > 0
retire les espaces
tableau 2d qui contien colone 1 [0]["1234"]
remplit le tableau avec les inputs*/
#include <stdlib.h>

void	ft_print_error(void);

char	**ft_format(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		cpt;

	j = -1;
	i = 0;
	tab = malloc(sizeof(char *) * 4);
	while (++j < 4)
	{
		cpt = -1;
		tab[j] = malloc(sizeof(char) * 5);
		while (++cpt < 4)
		{
			while (str[i] == ' ')
				i++;
			if (str[i] < '1' || str[i] > '4')
				return (ft_print_error(), NULL);
			tab[j][cpt] = str[i];
			i++;
		}
		tab[j][cpt] = '\0';
	}
	return (tab);
}
