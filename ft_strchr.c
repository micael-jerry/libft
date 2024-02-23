/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:40:15 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/23 10:54:29 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	i = 0;
	while (str[i] != '\0')
	{
		if ((int)str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
