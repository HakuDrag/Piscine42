/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 11:10:57 by callwood          #+#    #+#             */
/*   Updated: 2026/08/16 15:17:30 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void    ft_putchar(char c);
// mettre un espace apres chaque element 
// tout les 4 element faire un retour a la ligne

void	format(char *str)
{
	char	**tab;
	int	i;
	int	j;
	// check que tout est <= 4 && > 0
	//  retire les espaces
	// tableau 2d qui contien colone 1 [0]["1234"]
	// remplit le tableau avec les inputs
}

void	ft_check_inpt(char *str)
{
	
	// chaque borne accepte uniquement certaine borne en face:
	//B0 accepte {B2, B3, B4}
	//B2 accepte {B1, B2, B3}
	//B3 accepte {B1, B2}
	//B4 accepte {B1}
	

	//B2 { "1423", "1432", "2143", "2413", "2431", "3421", "3412", "3124", "3142", "3241", "3214"}

	//B2/B1 {"3214", "3124"}
	//B2/B2 {"1423", "2143", "2413", "3412", "3142", "3241"}
	//B2/B3 {"1432", "2431", "3421"}
	/********************************************************/

	//B3 {"1243","1342","1324","2134","2341","2314"}

	//B3/B1 {"1324","2134","2314"}
	//B2/B3 {"1432", "2431", "3421"}
	/************************************************/


}

void	ft_remplissage
{
	//selon [row1left] commence la serie ex: row1left = 2 donc premiere ligne = 3412
	// ensuite pour la ligne suivante on ajoute 1 ex: deuxieme ligne = 4123
	// si on arrive a 4 on reviens a 1
	// envoyer chaque case dans putchar 1 par 1

	//placer les 4 et 1234 si B4
	//B3 tree
	//B2 tree (finir par B2/B2 psk le plus de possibiliter)
	//deduction
}

void	rush01(char *str)
{
	//appel format
	//appel check
	//appel remplissage
}
