/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:24:11 by etasci            #+#    #+#             */
/*   Updated: 2026/01/25 16:01:39 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>


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
	p = malloc(sizeof(char) * len + 1);
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

int main()
{
	
}

