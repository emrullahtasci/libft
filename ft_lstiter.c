/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:52:29 by etasci            #+#    #+#             */
/*   Updated: 2026/02/06 19:34:45 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
#include<stdio.h>

void print_content(void *content)
{
	printf("%s",(char *)content);

}

int	main(void)
{
	t_list *liste = NULL;

	
	ft_lstadd_back(&liste, ft_lstnew("Karpuz"));
	ft_lstadd_back(&liste, ft_lstnew("Kavun"));
	ft_lstadd_back(&liste, ft_lstnew("Cilek"));

	
	printf("--- Liste Geziliyor ---\n");
	ft_lstiter(liste, print_content);

	return (0);
}