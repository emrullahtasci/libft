/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etasci <etasci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:03:27 by etasci            #+#    #+#             */
/*   Updated: 2026/01/30 19:41:44 by etasci           ###   ########.fr       */
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

