/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 16:07:44 by etasci            #+#    #+#             */
/*   Updated: 2026/01/25 17:54:04 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	num_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nbr;
	int		len;

	nbr = n;
	len = num_len(nbr);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
	}
	while (len--)
	{
		res[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 10)
	{
		res[0] = '-';

	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	char	*s;

	s = ft_itoa(42);
	printf("42    -> %s\n", s);
	free(s);
	s = ft_itoa(-123);
	printf("-123  -> %s\n", s);
	free(s);
}
