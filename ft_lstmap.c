/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:08:44 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/27 16:53:16 by mfidimal         ###   ########.fr       */
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

// void	ft_print_result(t_list *elem)
// {
// 	int		len;

// 	len = 0;
// 	while (((char *)elem->content)[len])
// 		len++;
// 	write(1, ((char *)elem->content), len);
// 	write(1, "\n", 1);
// }

// t_list	*ft_lstnewone(void *content)
// {
// 	t_list	*elem;

// 	elem = (t_list *)malloc(sizeof(t_list));
// 	if (!elem)
// 		return (NULL);
// 	if (!content)
// 		elem->content = NULL;
// 	else
// 		elem->content = content;
// 	elem->next = NULL;
// 	return (elem);
// }

// void	*ft_map(void *ct)
// {
// 	int i;
// 	void	*c;
// 	char	*pouet;

// 	c = ct;
// 	i = -1;
// 	pouet = (char *)c;
// 	while (pouet[++i])
// 		 pouet[i] = 'd';
// 	return (c);
// }

// void    ft_del(void *content)
// {
// 	free(content);
// }

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*lstnew;

// 	lstnew = (t_list *) malloc(sizeof(t_list));
// 	if (!lstnew)
// 		return (NULL);
// 	lstnew->content = content;
// 	lstnew->next = NULL;
// 	return (lstnew);
// }

// int main()
// {
//     t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	t_list		*list;
// 	char		*str = strdup("lorem");
// 	char		*str2 = strdup("ipsum");
// 	char		*str3 = strdup("dolor");
// 	char		*str4 = strdup("sit");

// 	elem = ft_lstnewone(str);
// 	elem2 = ft_lstnewone(str2);
// 	elem3 = ft_lstnewone(str3);
// 	elem4 = ft_lstnewone(str4);
// 	elem->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = elem4;
// 	if (!(list = ft_lstmap(elem, &ft_map, &ft_del)))
// 		return (0);
// 	if (list == elem)
// 		write(1, "A new list is not returned\n", 27);
// 	while (list)
// 	{
// 		 ft_print_result(list);
// 		list = list->next;
// 	}
//     return (0);
// }
