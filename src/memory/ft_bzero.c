/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:06:17 by mfidimal          #+#    #+#             */
/*   Updated: 2025/03/24 08:20:16 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*ptr_trans;
	size_t			i;

	ptr_trans = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		ptr_trans[i] = '\0';
		i++;
	}
}
