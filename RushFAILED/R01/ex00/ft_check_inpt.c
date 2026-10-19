/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_inpt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 13:52:30 by callwood          #+#    #+#             */
/*   Updated: 2026/08/16 21:16:36 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_error(void);

char	ft_bopposite(char **tab, int i, int j);

void	ft_check_inpt(char **tab)
{
	int		i;
	int		j;
	char	opp;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			opp = ft_bopposite(tab, i, j);
			if ((tab[i][j] == '4' && opp != '1')
				|| (tab[i][j] == '3' && (opp == '3' || opp == '4'))
				|| (tab[i][j] == '2' && opp == '4')
				|| (tab[i][j] == '1' && opp == '1'))
			{
				ft_print_error();
				return ;
			}
		}
	}
}
