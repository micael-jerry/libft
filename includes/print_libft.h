/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_libft.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:27:18 by mfidimal          #+#    #+#             */
/*   Updated: 2025/03/24 09:38:55 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_LIBFT_H
# define PRINT_LIBFT_H

# include <limits.h>
# include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
