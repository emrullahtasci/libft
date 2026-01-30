/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 01:09:44 by etasci            #+#    #+#             */
/*   Updated: 2026/01/30 20:08:31 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*dup;

	size = 0;
	while (s[size])
	{
		size++;
	}
	dup = (char *)malloc(sizeof(char) * (size + 1));
	if (!dup)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		dup[i] = s[i];
		i++;
	}
	i++;
	dup[i] = '\0';
	return (dup);
}
