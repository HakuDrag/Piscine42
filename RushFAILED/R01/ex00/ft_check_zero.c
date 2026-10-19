/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:15:38 by callwood          #+#    #+#             */
/*   Updated: 2026/08/16 21:20:06 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*return indice ligne 
si il y a pas return -1*/
int	ft_check_zero(char	**tab)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[i][j] == '0')
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}
