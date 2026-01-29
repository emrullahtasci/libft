/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:03:27 by etasci            #+#    #+#             */
/*   Updated: 2026/01/29 20:57:33 by etasci           ###   ########.fr       */
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
#include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = ft_lstnew("A");
	n2 = ft_lstnew("B");
	n3 = ft_lstnew("C");
	
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	list = n1;
	printf("Liste uzunluğu: %d\n", ft_lstsize(list));
	return (0);
}
