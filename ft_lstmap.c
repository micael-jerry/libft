/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:08:44 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/29 15:34:13 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static t_list	*lstmap_traitement(t_list **list, size_t size,
		void *(*f)(void *), void (*del)(void *))
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		list[i]->content = f(list[i]->content);
		if (list[i + 1])
			list[i]->next = list[i + 1];
		else
			list[i]->next = NULL;
		if (0)
			(*del)(list[i]->content);
		i++;
	}
	return (list[0]);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	list_element_size;
	t_list	**list_element;
	size_t	i;
	t_list	*element;
	t_list	*result;

	list_element_size = ft_lstsize(lst);
	list_element = (t_list **)malloc(sizeof(t_list *) * (list_element_size
				+ 1));
	if (!list_element)
		return (NULL);
	i = 0;
	while (i < list_element_size)
	{
		element = ft_lstnew(lst->content);
		list_element[i] = element;
		lst = lst->next;
		i++;
	}
	list_element[i] = NULL;
	result = lstmap_traitement(list_element, list_element_size, f, del);
	free(list_element);
	return (result);
}
