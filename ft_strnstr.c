/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:09:32 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/23 10:55:25 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// changer en fonction du libft: strncmp -> ft_strcmp

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	big_len;
	size_t	little_len;

	i = 0;
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	if (big_len < little_len || len < little_len)
		return (NULL);
	while ((i + little_len) < len)
	{
		if (strncmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
