/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:55:31 by callwood          #+#    #+#             */
/*   Updated: 2026/08/23 15:55:31 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include "dict.h"

int	load_dict(int argc, char **argv, t_dict_entry **dict, int *count)
{
	if (argc == 2)
		return (load_dictionary("numbers.dict", dict, count));
	return (load_dictionary(argv[1], dict, count));
}

int	main(int argc, char *argv[])
{
	t_dict_entry	*dict;
	char			**formatted;
	char			*number;
	int				count;
	int				groups;

	if (argc < 2 || argc > 3)
		return (write(1, "Error\n", 6), 1);
	if (argc == 2)
		number = argv[1];
	else
		number = argv[2];
	if (!load_dict(argc, argv, &dict, &count))
		return (write(1, "Dict Error\n", 11), 1);
	if (!ft_is_valid_number(number))
		return (write(1, "Error\n", 6), 1);
	formatted = ft_format(number);
	if (!formatted)
		return (write(1, "Dict Error\n", 11), 1);
	ft_process_print(formatted, dict, count);
	groups = 0;
	while (formatted[groups])
		groups++;
	ft_free_groups(formatted, groups);
	return (0);
}
