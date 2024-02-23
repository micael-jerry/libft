/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:52:44 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/23 19:03:54 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	int	*dest_trans;
	int	*src_trans;
	int	i;

	if (dest == src || size == 0)
	{
		return (dest);
	}
	dest_trans = (int *)dest;
	src_trans = (int *)src;
	if (dest_trans > src_trans && (dest_trans - src_trans) < (int)size)
	{
		i = size - 1;
		while (i >= 0)
		{
			dest_trans[i] = src_trans[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(dest, src, size);
	}
	return (dest);
}
