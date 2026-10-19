/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vistockm <vistock@student.42belgium.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 17:39:17 by vistockm          #+#    #+#             */
/*   Updated: 2026/08/23 17:42:58 by vistockm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_dict_entry
{
	char	*number;
	char	*word;
}	t_dict_entry;

/* Utilities */
int		is_space(char c);
int		is_digit(char c);
int		is_printable(char c);
char	*copy_string(char *str, int start, int len);
int		ft_strcmp(char *s1, char *s2);

/* Dictionary parsing */
int		count_file_bytes(char *filename, int *size);
int		read_file(char *filename, char *buffer, int size);
int		count_entries(char *buffer);
int		get_number(char *line, int *pos, char **number);
int		get_word(char *line, int pos, char **word);
int		parse_line(char *line, t_dict_entry *entry);
int		parse_buffer(char *buffer, t_dict_entry *entries);

/* Dictionary loading */
int		allocate_entries(char *buffer, t_dict_entry **entries, int *count);
int		load_buffer(char *filename, char **buffer, int *size);
int		load_dictionary(char *filename, t_dict_entry **entries, int *count);
void	free_dictionary(t_dict_entry *entries, int count);

/* Dictionary search */
char	*ft_get_value(char *value, t_dict_entry *dict, int count);

#endif
