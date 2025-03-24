/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:43:03 by mfidimal          #+#    #+#             */
/*   Updated: 2025/03/24 08:39:01 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix_libft.h"

size_t	ft_matrixsize(void **arr)
{
	size_t	i;

	if (!arr)
		return (0);
	i = 0;
	while (arr[i])
		i++;
	return (i);
}
