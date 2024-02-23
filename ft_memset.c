/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:44:22 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/20 21:29:40 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t size)
{
	int		*pointer_temp;
	size_t	i;

	if (!pointer)
		return (NULL);
	pointer_temp = (int *)pointer;
	i = 0;
	while (i < size)
	{
		pointer_temp[i] = value;
		i++;
	}
	return (pointer);
}
