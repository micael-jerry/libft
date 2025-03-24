/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:08:33 by mfidimal          #+#    #+#             */
/*   Updated: 2025/03/24 08:33:01 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*copy;
	size_t	i;

	len = ft_strlen(str);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		copy[i] = (char)str[i];
		i++;
	}
	return (copy);
}
