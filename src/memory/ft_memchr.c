/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:12:06 by mfidimal          #+#    #+#             */
/*   Updated: 2025/03/24 08:20:26 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_libft.h"

void	*ft_memchr(const void *mem_block, int chr, size_t size)
{
	char	*mem_block_trans;
	size_t	i;

	mem_block_trans = (char *)mem_block;
	i = 0;
	while (i < size)
	{
		if ((int)mem_block_trans[i] == chr)
			return ((void *)&mem_block_trans[i]);
		i++;
	}
	return (NULL);
}
