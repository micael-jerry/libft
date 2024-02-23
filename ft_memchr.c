/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:12:06 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/21 16:17:31 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem_block, int chr, size_t size)
{
	char	*mem_block_trans;
	size_t	i;

	mem_block_trans = (char *)mem_block;
	if (chr == '\0')
		return ((void *)&mem_block_trans[ft_strlen(mem_block_trans)]);
	i = 0;
	while (i < size)
	{
		if ((int)mem_block_trans[i] == chr)
			return ((void *)&mem_block_trans[i]);
		i++;
	}
	return (NULL);
}
