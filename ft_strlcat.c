/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:28:42 by emrullah          #+#    #+#             */
/*   Updated: 2026/01/21 02:29:49 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned char		*d;
	const unsigned char	*s;

	size_t i, dst_len, src_len;
	i = 0;
	dst_len = strlen(dst);
	src_len = strlen(src);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (i < src_len && dst_len + 1 < dstsize)
	{
		d[dst_len] = s[i];
		dst_len++;
		i++;
		d[dst_len] = '\0';
	}
	return (dst_len + (src_len - i));
}
#include <stdio.h>

int	main(void)
{
	char	dst[6] = "mer";
	char	src[] = "haba";

	ft_strlcat(dst, src, sizeof(dst));
	printf("%s\n", dst);
	return (0);
}
