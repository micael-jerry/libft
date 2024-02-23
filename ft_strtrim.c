/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:52:41 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/23 23:37:45 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

typedef struct str_trim_info
{
	int					start;
	int					end;
	size_t				len;
}						str_trim_info;

static int	is_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static str_trim_info	str_trim_result_len(const char *s1, const char *set)
{
	size_t			set_count;
	size_t			i;
	size_t			j;
	str_trim_info	trim_info;

	set_count = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (is_set(s1[i], set))
			set_count++;
		else
			break ;
		i++;
	}
	trim_info.start = i;
	j = strlen(s1) - 1;
	while (j > i)
	{
		if (is_set(s1[j], set))
			set_count++;
		else
			break ;
		j--;
	}
	trim_info.end = j;
	trim_info.len = strlen(s1) - set_count;
	return (trim_info);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char			*result;
	int				i;
	str_trim_info	info;

	info = str_trim_result_len(s1, set);
	result = (char *)malloc(sizeof(char) * (info.len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i <= info.end)
	{
		result[i] = s1[info.start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
