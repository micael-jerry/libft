/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:06:17 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/20 20:34:33 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_bzero(void *ptr, size_t n)
{
	int		*ptr_trans;
	size_t	i;

	ptr_trans = (int *)ptr;
	i = 0;
	while (i < n)
	{
		ptr_trans[i] = '\0';
		i++;
	}
}
