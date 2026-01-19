/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 21:26:27 by emrullah          #+#    #+#             */
/*   Updated: 2026/01/19 14:29:58 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
void *ft_memchr(const void *s, int c, size_t n )
{
    size_t  i;
    i =0;
    unsigned char   *p;
    p=(unsigned char *)s;
    while(i < n)
    {
        if(p[i] ==(unsigned char)c)
        {
            return(p +i);
            

        }
        i++;
        
    } 
    return(NULL);
    #include<stdio.h>
}
int main()
{
    char s[]="merhaba";
    char *p;
    p=ft_memchr(s,'h',7);
}