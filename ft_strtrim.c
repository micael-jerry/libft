/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:52:41 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/24 08:50:50 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

typedef struct t_str_trim_info
{
	int					start;
	int					end;
}						t_str_trim_info;

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

static t_str_trim_info	str_trim_result_len(const char *s1, const char *set)
{
	size_t			i;
	size_t			j;
	t_str_trim_info	trim_info;

	i = 0;
	while (s1[i] != '\0')
	{
		if (is_set(s1[i], set))
			i++;
		else
			break ;
	}
	trim_info.start = i;
	j = strlen(s1) - 1;
	while (j > i)
	{
		if (is_set(s1[j], set))
			j--;
		else
			break ;
	}
	trim_info.end = j;
	return (trim_info);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char			*result;
	int				i;
	t_str_trim_info	info;

	info = str_trim_result_len(s1, set);
	result = (char *)malloc(sizeof(char) * ((info.end - info.start + 1) + 1));
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

// int main()
// {
//     char test[] = " lorem ipsum dolor sit amet";
//     printf("\"%s\"\nRES:\n", test);
//     printf("\"%c\"", ft_strtrim(test, "l ")[90]);
//     return 0;
// }
