/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 21:20:31 by etasci            #+#    #+#             */
/*   Updated: 2026/02/03 23:41:38 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**free_all(char **tab, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(tab[j]);
		j++;
	}
	free(tab);
	return (NULL);
}
static int	func(const char *s, char **tab, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			tab[j] = ft_substr(s, start, i - start);
			if (!tab[j])
				return (0);
			j++;
		}
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	start;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	if (!func(s, tab, c))
		return (NULL);
	return (tab);
}
