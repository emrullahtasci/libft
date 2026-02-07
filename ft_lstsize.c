/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:03:27 by etasci            #+#    #+#             */
/*   Updated: 2026/02/06 14:49:54 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	size_t	i;

	node = lst;
	i = 0;
	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}
#include<stdio.h>
int main()
{
	t_list	*liste = NULL;
	ft_lstadd_front(&liste,ft_lstnew("3"));
	ft_lstadd_front(&liste,ft_lstnew("2"));
	ft_lstadd_front(&liste,ft_lstnew("1"));

	printf("%d",ft_lstsize(liste));
}

