/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:04:52 by emrullah          #+#    #+#             */
/*   Updated: 2026/01/19 20:30:22 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
#include <stdio.h>

int	main(void)
{
	char	c[] = "emre";
	char	p[] = "emru";

	printf("%d\n", ft_memcmp(c, p, 3));
}
