/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:00:05 by etasci            #+#    #+#             */
/*   Updated: 2026/01/25 16:07:09 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

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
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[j++] = ft_substr(s, start, i - start);
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}

int	main(void)
{
	char	*s;
	char	**res;
	int		i;

	s = "111emrullahdtsc111";
	res = ft_split(s, '1');
	if (!res)
		return (1);
	i = 0;
	while (res[i])
	{
		printf("word[%d]: %s\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
