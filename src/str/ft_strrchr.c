/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:36:10 by mfidimal          #+#    #+#             */
/*   Updated: 2025/03/24 08:33:01 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if ((int)str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
