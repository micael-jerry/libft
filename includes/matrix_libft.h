/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_libft.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:06:57 by mfidimal          #+#    #+#             */
/*   Updated: 2025/09/10 21:06:59 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_LIBFT_H
# define MATRIX_LIBFT_H

# include "str_libft.h"
# include <stdlib.h>

size_t	ft_matrixsize(void **arr);
void	ft_matrixfree(void **arr);

/**
 * Appends a new string to the end of a NULL-terminated string matrix.
 *
 * This function creates a new matrix of strings (NULL-terminated array of
 * `char *`) that contains all the strings from the original `matrix` plus
 * the new string `new` added at the end. Each original string is duplicated
 * before being copied into the new matrix, while the pointer `new` itself
 * is stored directly (not duplicated).
 *
 * If `free_old_matrix` is non-zero, the old matrix and its strings are freed
 * after the new matrix is created.
 *
 * Example:
 *   char **m = NULL;
 *   m = ft_matrix_char_push(m, ft_strdup("Hello"), 1);
 *   m = ft_matrix_char_push(m, ft_strdup("World"), 1);
 *   => ["Hello", "World", NULL]
 *
 * @param matrix          The original string matrix (can be NULL).
 * @param new             The new string to append (ownership is transferred).
 * @param free_old_matrix If non-zero, frees the old matrix after use.
 * @return A new NULL-terminated string matrix containing all elements, or
 *         NULL on allocation failure.
 */
char	**ft_matrix_char_push(char **matrix, char *new, int free_old_matrix);

#endif