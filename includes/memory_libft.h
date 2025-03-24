/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_libft.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:16:22 by mfidimal          #+#    #+#             */
/*   Updated: 2025/03/24 08:18:58 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_LIBFT_H
# define MEMORY_LIBFT_H

# include <stdlib.h>

void	*ft_calloc(size_t n, size_t size);
void	*ft_memset(void *ptr, int val, size_t size);
void	*ft_memcpy(void *ptr, const void *src, size_t size);
void	*ft_memmove(void *ptr, const void *src, size_t size);
void	*ft_memchr(const void *mem_block, int chr, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *ptr, size_t size);

#endif
