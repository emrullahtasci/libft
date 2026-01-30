/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 23:31:20 by etasci            #+#    #+#             */
/*   Updated: 2026/01/30 20:02:10 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
