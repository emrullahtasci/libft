/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:48:15 by emrullah          #+#    #+#             */
/*   Updated: 2026/01/19 14:29:58 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
char *ft_strrchr(const char *s, int c)
{
    char *last;
    last = NULL;
    while(*s)
    {
        if(*s == (char)c)
        last =( char *)s;
        s++;
    }


    if((char)c == '\0')
    return((char *)s);
    return (last);

   
}
 #include<stdio.h>
int main(void)
{
    char s[]="Emrullah";
    printf("%s\n",ft_strrchr(s,'a'));
}