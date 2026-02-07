/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:46:01 by etasci            #+#    #+#             */
/*   Updated: 2026/02/05 19:07:10 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
int main()
{
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);



    
    ft_putendl_fd("Merhaba", fd);
    ft_putendl_fd("Emrullah", fd); 
    
    close(fd);
}
