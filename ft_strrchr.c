/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:48:15 by emrullah          #+#    #+#             */
/*   Updated: 2026/01/23 15:32:48 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}
#include <stdio.h>

int	main(void)
{
	char	s[] = "Emrullah";

	printf("%s\n", ft_strrchr(s, 'a'));
}
