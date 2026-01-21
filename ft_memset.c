/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:33:39 by etasci            #+#    #+#             */
/*   Updated: 2026/01/20 21:54:55 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
}

int	main(void)
{
	int	str[] = {674821, 23, 12, 123};
	int	i;

	ft_memset(str, 5, 2);
	i = 0;
	while (i <= 3)
	{
		printf("%d \n", str[i]);
		i++;
	}
}
