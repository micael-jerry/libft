/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:06:17 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/23 18:58:26 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_bzero(void *ptr, size_t n)
{
	char	*ptr_trans;
	size_t	i;

	ptr_trans = (char *)ptr;
	i = 0;
	while (i < n)
	{
		ptr_trans[i] = '\0';
		i++;
	}
}
