/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:08:44 by mfidimal          #+#    #+#             */
/*   Updated: 2025/03/24 08:14:38 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*item;

	if (!lst || !f)
		return (NULL);
	result = NULL;
	while (lst)
	{
		item = ft_lstnew(f(lst->content));
		if (!item)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, item);
		lst = lst->next;
	}
	return (result);
}
