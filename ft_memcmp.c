/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:04:52 by emrullah          #+#    #+#             */
/*   Updated: 2026/02/10 23:03:38 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c;
	unsigned char	*p;

	i = 0;
	c = ((unsigned char *)s1);
	p = ((unsigned char *)s2);
	while (i < n)
	{
		if (c[i] != p[i])
		{
			return (c[i] - p[i]);
		}
		i++;
	}
	return (0);
}
