/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 23:31:20 by etasci            #+#    #+#             */
/*   Updated: 2026/01/20 01:07:24 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	toplam;
	char	*p;

	i = 0;
	toplam = nmemb * size;
	p = (char *)malloc(toplam);
	if (!p)
	{
		return (NULL);
	}
	while (i < toplam)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}

#include <stdio.h>

int	main(void)
{
	char	*p;

	p = (char *)ft_calloc(sizeof(char), 5);
	printf("%c", *p);
}
