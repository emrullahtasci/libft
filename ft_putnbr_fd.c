/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:24:55 by etasci            #+#    #+#             */
/*   Updated: 2026/02/05 19:02:19 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<fcntl.h>
void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	c = (num % 10) + '0';
	write(fd, &c, 1);
}

int main()
{
    int fd;
    int n = 4924535;

    fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
        return (1);

    // DOĞRU SIRA: Önce sayı (n), sonra dosya numarası (fd)
    ft_putnbr_fd(n, fd); 

    close(fd); // n değil, fd kapatılır!
    return (0);
}
