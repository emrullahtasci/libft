/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:52:25 by etasci            #+#    #+#             */
/*   Updated: 2026/02/05 16:01:30 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

#include <stdio.h>
#include <ctype.h>

char	ft_test(unsigned int i, char c)
{
	if(i%2==0 && c<='z' && c>='a')
	{
		return(c - 32);
		
	}
	return(c);

}

int main()
{
	char	*s="emrullah";
	char	*result= ft_strmapi(s,ft_test);
	printf("%s",result);
	free(result);
}
