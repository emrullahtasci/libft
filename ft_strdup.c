/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 01:09:44 by etasci            #+#    #+#             */
/*   Updated: 2026/02/02 23:52:59 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *dest;
	size_t	len;

	len = ft_strlen(s);

	dest=(char *)malloc(sizeof(char) * (len + 1));
	if(!dest)
	{
		return(NULL);
	}
	ft_memcpy(dest,s,len + 1);
	return(dest);
}
