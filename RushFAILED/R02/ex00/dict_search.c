/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_search.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vistockm <vistock@student.42belgium.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 16:14:45 by vistockm          #+#    #+#             */
/*   Updated: 2026/08/23 17:56:45 by vistockm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*ft_get_value(char *value, t_dict_entry *dict, int count)
{
	int		i;

	i = 0;
	while (i < count)
	{
		if (ft_strcmp(dict[i].number, value) == 0)
			return (dict[i].word);
		i++;
	}
	return (NULL);
}
