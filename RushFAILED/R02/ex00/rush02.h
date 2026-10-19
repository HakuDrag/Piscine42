/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 17:13:27 by callwood          #+#    #+#             */
/*   Updated: 2026/08/23 17:13:27 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_dict_entry
{
	char	*number;
	char	*word;
}	t_dict_entry;

/* General Utilities */
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
int		ft_is_valid_number(char *number);

/* Formatting */
int		ft_mod(char *str);
char	*ft_addzero(char *str, int nb);
char	**ft_make_groups(char *str);
char	**ft_format(char *str);
void	ft_free_groups(char **groups, int i);

/* Printing */
char	*ft_get_val(char *key, t_dict_entry *dict, int size);
void	ft_print_space(int *first);
int		ft_print_val(char *key, t_dict_entry *dict, int size, int *first);
int		ft_print_tens(char *str, t_dict_entry *dict, int size, int *first);
int		ft_print_scale(int zeros, t_dict_entry *dict, int size, int *first);
void	ft_process_print(char **tab, t_dict_entry *dict, int size);
int		ft_dict_error(void);
void	ft_print_zero(t_dict_entry *dict, int size);
int		ft_group_count(char **tab);
int		ft_print_block(char *str, t_dict_entry *dict, int size, int *first);

#endif
