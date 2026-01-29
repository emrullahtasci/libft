/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 01:42:11 by etasci            #+#    #+#             */
/*   Updated: 2026/01/30 02:24:37 by etasci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		free(lst);
		*lst = (*lst)->next;
	}
}
void	del(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)

{
	t_list *lst;

	lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Merhaba")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("42")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("libft")));

	ft_lstclear(&lst, del);

	if (lst == NULL)
		printf("Liste başarıyla temizlendi ✅\n");
	else
		printf("Liste temizlenmedi ❌\n");

	return (0);
}
