/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 01:47:45 by emrullah          #+#    #+#             */
/*   Updated: 2026/01/19 14:29:58 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
char * ft_strchr(const char *s, int c)
{
    while (*s)

    {
        if (*s == (char)c)
        {
            return((char *)s);
        }
        s++;
    }

        if(*s == (char)c)
        {
            return((char *)s);

        }
        return(NULL);
        
    
    
}
int main()
    {
        char str[]= "MERHABA";
        char *p;
        p = ft_strchr(str, 'h');
        if (p)
            printf("Bulundu: %s\n", p);
        else
            printf("Bulunamadı\n");

            p = ft_strchr(str, '\0');
            if (p)
            
            printf("Null bulundu: pozisyon %ld\n", p - str);
            return (0);
    
    }
