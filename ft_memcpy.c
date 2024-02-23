/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:43:07 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/23 19:01:02 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char	*dest_trans;
	char	*src_trans;
	size_t	i;

	dest_trans = (char *)dest;
	src_trans = (char *)src;
	i = 0;
	while (i < size)
	{
		dest_trans[i] = src_trans[i];
		i++;
	}
	return (dest);
}
