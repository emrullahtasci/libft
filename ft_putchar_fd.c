/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 09:35:31 by etasci            #+#    #+#             */
/*   Updated: 2026/01/23 10:16:17 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, char fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	ft_putchar_fd('A', 1);
	ft_putchar_fd('i', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
