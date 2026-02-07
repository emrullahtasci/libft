/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 09:07:41 by etasci            #+#    #+#             */
/*   Updated: 2026/02/05 18:18:16 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<fcntl.h>

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

int main()
{
    int    fd; // 1. HATA DÜZELTME: char yerine int olmalı!
    char *str = "emrullah basaracaksin";
    
    // O_TRUNC eklemek iyidir, dosyayı her seferinde temizler
    fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    
    if (fd == -1) // Dosya açılmazsa sistemi koru
        return (1);

    // 2. HATA DÜZELTME: Kendi yazdığın fonksiyonu kullan!
    ft_putstr_fd(str, fd);
    
    close(fd);
    return (0);
}