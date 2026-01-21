/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:24:11 by etasci            #+#    #+#             */
/*   Updated: 2026/01/21 19:57:04 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*p;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
	{
		return (NULL);
	}
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	if (start > slen)
		return (p);
	while (s[start + i] && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = 0;
	return (p);
}
#include <stdio.h>

int	main(void)
{
	char	s[] = "emrullah";
	char	*sub;

	sub = ft_substr(s, 3, 4);
	if (sub)
	{
		printf("%s\n", sub);
		free(sub);
	}
	return (0);
}
