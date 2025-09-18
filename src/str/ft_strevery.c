/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strevery.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:39:09 by mfidimal          #+#    #+#             */
/*   Updated: 2025/09/18 11:40:12 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_libft.h"

int	ft_strevery(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			return (0);
		i++;
	}
	return (1);
}
