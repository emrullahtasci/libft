/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:39:43 by etasci            #+#    #+#             */
/*   Updated: 2026/01/15 21:49:01 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stddef.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size  )
{
    int i = 0;
    size_t 	i;

    i = 0;

    if(size == 0 )
    {
     return(strlen(src));
    }  
    while(src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++; 
    }
    dest[i] = '\0';
    return(ft_strlen(dest));
}

int main(void)
{
    char dest[10];
    char src[]="selam";
    ft_strlcpy(dest, src, 10);
}