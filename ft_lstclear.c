/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 01:42:11 by etasci            #+#    #+#             */
/*   Updated: 2026/02/06 18:44:48 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
void del_content(void *content)
{
	free(content);
}
#include<stdio.h>
int main()
{
	t_list *list = NULL;
	ft_lstadd_back(&list,ft_lstnew(ft_strdup("bas")));
	ft_lstadd_back(&list,ft_lstnew(ft_strdup("orta")));
	ft_lstadd_back(&list,ft_lstnew(ft_strdup("son")));

	t_list *tmp = list;
	while (tmp)
    {
        printf("%s -> ", (char *)tmp->content);
        tmp = tmp->next;
    }
    printf("NULL\n");

    ft_lstclear(&list, del_content);
    
    return (0);
}







