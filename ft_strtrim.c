/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:52:41 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/23 22:03:01 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static size_t	len_str_without_set(const char *s1, const char *set)
{
	size_t	set_count;
	size_t	i;
	size_t	set_len;

	set_count = 0;
	i = 0;
	set_len = strlen(set);
	while (s1[i] != '\0')
	{
		if (strncmp(&s1[i], set, set_len) == 0)
		{
			set_count++;
			i = i + set_len;
		}
		else
			i++;
	}
	return (strlen(s1) - ((strlen(set) * set_count)));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	size_t	len_str_trim;
	int		i;
	int		j;

	len_str_trim = len_str_without_set(s1, set);
	str_trim = (char *) malloc(sizeof(char) * (len_str_trim + 1));
	if (str_trim == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < (int) len_str_trim)
	{
		if (strncmp(&s1[i], set, strlen(set)))
		{
			str_trim[j] = s1[i];
			i++;
			j++;
		}
		else
			i = i + strlen(set);
	}
	str_trim[j] = '\0';
	return (str_trim);
}
