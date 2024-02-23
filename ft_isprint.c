/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:15:08 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/20 14:27:46 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iscntrl(int c)
{
	return ((c >= 0 && c <= 31) || (c == 127));
}

int	ft_isprint(int c)
{
	return (!ft_iscntrl(c));
}
