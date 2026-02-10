/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 21:26:27 by emrullah          #+#    #+#             */
/*   Updated: 2026/02/10 08:26:39 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return (p + i);
		}
		i++;
	}
	return (NULL);
}
#include<stdio.h>
int	main(void)
{
	char	data[] = {10, 20, 30, 40, 50};
	void	*res;

	res = ft_memchr(data, 30, 5);
	printf("%d",res);
}

