/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:41:23 by mfidimal          #+#    #+#             */
/*   Updated: 2025/09/10 11:08:29 by mfidimal         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "char_libft.h"
#include "str_libft.h"

static int	is_ignored_chr(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v'
		|| c == '\f')
		return (1);
	return (0);
}

static int	get_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

long	ft_atoi(const char *str)
{
	long	i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
		{
			res += (str[i] - '0');
			if (ft_isdigit(str[i + 1]) && (i + 1) < (int)ft_strlen(str))
				res *= 10;
			else
				return (res * sign);
		}
		else if ((str[i] == '-' || str[i] == '+') && (ft_isdigit(str[i + 1])))
			sign = get_sign(str[i]);
		else if (!is_ignored_chr(str[i]))
			break ;
		i++;
	}
	return (res * sign);
}
