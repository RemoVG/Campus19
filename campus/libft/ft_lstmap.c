/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-ga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:08:20 by revan-ga          #+#    #+#             */
/*   Updated: 2025/04/25 14:43:41 by revan-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!f || !lst || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
