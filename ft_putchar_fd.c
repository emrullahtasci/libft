/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 09:35:31 by etasci            #+#    #+#             */
/*   Updated: 2026/02/05 17:48:05 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
#include<fcntl.h>

int main()
{
	int fd;
	fd = open("test.txt", O_WRONLY | O_CREAT , 0644);
	ft_putchar_fd('a',fd);
	close(fd);
}

