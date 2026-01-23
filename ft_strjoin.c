/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:52:49 by etasci            #+#    #+#             */
/*   Updated: 2026/01/23 11:48:47 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*p;
	size_t	j;

	size_t len1, len2;
	i = 0;
	if (!s1 || !s2)
	{
		return (NULL);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	p = malloc(len1 + len2 + 1);
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
int	main(void)
{
	char	s1[] = "emrullah";
	char	s2[] = "taşcı";
	char	*p;

	p = ft_strjoin(s1, s2);
		if (p)
	{
		printf("%s\n", p);
		free(p);
	}
	return (0);

}
