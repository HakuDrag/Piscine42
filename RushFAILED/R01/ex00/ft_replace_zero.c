/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:19:38 by callwood          #+#    #+#             */
/*   Updated: 2026/08/16 21:23:24 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	**ft_replace_zero(char **tab, int line)
{
	int	j;
	int	somme;
	int	zeroindex;
	int	cpt;

	j = 0;
	somme = 0;
	zeroindex = -1;
	cpt = 0;
	while (j < 4)
	{
		if (tab[line][j] == '0')
		{
			zeroindex = j;
			cpt++;
		}
		else
			somme = somme + (tab[line][j] - '0');
		j++;
	}
	if (cpt == 1)
		tab[line][zeroindex] = (10 - somme) + '0';
	return (tab);
}
