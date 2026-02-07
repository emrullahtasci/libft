/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:03:20 by etasci            #+#    #+#             */
/*   Updated: 2026/02/05 16:35:17 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdlib.h>
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
#include<stdio.h>
void	ft_test(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c <= 'z' && *c >= 'a')
    {
        *c = *c - 32; 
    }
}

int main()
{
	char s[]="Emrullah";
	ft_striteri(s,ft_test);
	printf("%s",s);
	return(0);
}


