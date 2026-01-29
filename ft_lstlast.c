/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:26:06 by etasci            #+#    #+#             */
/*   Updated: 2026/01/29 21:44:17 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
#include<stdio.h>
int	main(void)
{
	t_list	*list;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*last;

	n1 = ft_lstnew("bir");
	n2 = ft_lstnew("iki");
	n3 = ft_lstnew("uc");
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	list = n1;
	last = ft_lstlast(list);
	if (last)
		printf("Son node: %s\n", (char *)last->content);
	else
		printf("Liste bos\n");
	return (0);
}
