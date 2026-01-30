/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:00:05 by etasci            #+#    #+#             */
/*   Updated: 2026/01/30 20:07:33 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		start;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			start = i;
		while (s[i] && s[i] != c)
			i++;
		res[j++] = ft_substr(s, start, i - start);
		i++;
	}
	res[j] = NULL;
	return (res);
}
