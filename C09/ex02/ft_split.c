/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 08:34:55 by callwood          #+#    #+#             */
/*   Updated: 2026/08/26 13:02:27 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		if (str[i] && !ft_is_sep(str[i], charset))
		{
			count++;
			while (str[i] && !ft_is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*ft_str_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	len = 0;
	while (str[len] && !ft_is_sep(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	if (!str || !charset)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		if (str[i] && !ft_is_sep(str[i], charset))
		{
			tab[j] = ft_str_word(&str[i], charset);
			j++;
			while (str[i] && !ft_is_sep(str[i], charset))
				i++;
		}
	}
	tab[j] = NULL;
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int     i;
	char    **tab;

	if (argc == 3)
	{
		tab = ft_split(argv[1], argv[2]);
		i = 0;
		while (tab && tab[i])
		{
			printf("%s\n", tab[i]);
			free(tab[i]);
			i++;
		}
		free(tab);
	}
	return (0);
}*/
