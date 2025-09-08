/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixpush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:36:47 by mfidimal          #+#    #+#             */
/*   Updated: 2025/09/08 11:44:35 by mfidimal         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "matrix_libft.h"

static char	**push(char **matrix, char *new)
{
	char	**res;
	int		i;
	char	*end_line;

	i = 0;
	res = (char **)malloc((ft_matrixsize((void **)matrix) + 2)
			* sizeof(char *));
	if (!res)
		return (NULL);
	if (matrix)
	{
		while (matrix[i])
		{
			res[i] = ft_strdup(matrix[i]);
			end_line = ft_strchr(res[i], '\n');
			if (end_line)
				*end_line = '\0';
			i++;
		}
	}
	res[i] = new;
	i++;
	res[i] = NULL;
	return (res);
}

char	**ft_matrix_char_push(char **matrix, char *new, int free_old_matrix)
{
	char	**res;

	res = push(matrix, new);
	if (free_old_matrix)
		ft_matrixfree((void **)matrix);
	return (res);
}
