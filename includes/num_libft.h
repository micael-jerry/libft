/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_libft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:21:32 by mfidimal          #+#    #+#             */
/*   Updated: 2025/03/24 08:33:57 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_LIBFT_H
# define NUM_LIBFT_H

# include "str_libft.h"
# include <limits.h>
# include <stdlib.h>

typedef struct s_ft_itoa_int_info
{
	size_t	intlen;
	int		is_positive;
	int		absolute_value;
}			t_ft_itoa_int_info;

char		*ft_itoa(int n);

#endif