/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 23:31:20 by etasci            #+#    #+#             */
/*   Updated: 2026/02/02 16:56:51 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total_size;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	
	total_size = nmemb * size;
	
	p = malloc(total_size);
	if (!p)
	{
		return (NULL);
	}
	
	ft_bzero(p, total_size);
		return (p);
}

int main()
{
	char *p;
	p = (ft_calloc(1,1));
	if(p)
	{
		p[0]='4';
		p[1]='2';
		printf("%s",p[0],p[1]);
		free(p);
	}
	
}