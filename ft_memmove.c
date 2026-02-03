/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:24:36 by etasci            #+#    #+#             */
/*   Updated: 2026/02/02 09:09:27 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	if(!dest && !src)
		return(NULL);
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if(d < s)
	{
		while(n--)
			*d++ = *s++;
	}
	else 
	{
		while(n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;

		}

	}
	return(dest);

}
