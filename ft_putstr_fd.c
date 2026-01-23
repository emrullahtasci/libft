/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 09:07:41 by etasci            #+#    #+#             */
/*   Updated: 2026/01/23 09:31:51 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *a, int fd)
{
	int	i;

	if (!a)
		return ;
	i = 0;
	while (a[i])
	{
		write(fd, &a[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr_fd("34", 1);
	ft_putstr_fd("Merhaba", 1);
	return (0);
}
