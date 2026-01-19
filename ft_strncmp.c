/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:34:34 by emrullah          #+#    #+#             */
/*   Updated: 2026/01/19 14:29:58 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i=0;

    while(i<n && s1[i] && s2[i])
    {
        if(s1[i] != s2[i])
    {
        return((unsigned char)s1[i] - (unsigned char)s2[i]);
    }
    i++;

    }
}
int main()
{
    char s1[]="emre";
    char s2[]="emir";
    printf("%d\n",ft_strncmp(s1, s2,4));

}