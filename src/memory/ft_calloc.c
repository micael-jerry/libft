/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:24:04 by mfidimal          #+#    #+#             */
/*   Updated: 2025/03/24 08:20:05 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	i;

	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		((char *)mem)[i] = 0;
		i++;
	}
	return (mem);
}
