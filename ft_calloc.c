/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:24:04 by mfidimal          #+#    #+#             */
/*   Updated: 2024/03/06 14:15:37 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*mem;
	size_t	i;

	mem = (char *)malloc(size * n);
	if (!mem)
		return (NULL);
	i = 0;
	while (i < n)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}
