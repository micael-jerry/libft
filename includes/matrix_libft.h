/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_libft.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:37:06 by mfidimal          #+#    #+#             */
/*   Updated: 2025/09/08 12:08:27 by mfidimal         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef MATRIX_LIBFT_H
# define MATRIX_LIBFT_H

# include "str_libft.h"
# include <stdlib.h>

size_t	ft_matrixsize(void **arr);
void	ft_matrixfree(void **arr);
char	**ft_matrix_char_push(char **matrix, char *new, int free_old_matrix);

#endif