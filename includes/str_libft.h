/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_libft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:05:44 by mfidimal          #+#    #+#             */
/*   Updated: 2025/09/18 11:41:34 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_LIBFT_H
# define STR_LIBFT_H

# include <stdlib.h>

typedef struct s_str_trim_info
{
	size_t	start;
	size_t	end;
}			t_str_trim_info;

size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
long		ft_atoi(const char *str);
char		*ft_strdup(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);

/**
 * Splits a string into an array of substrings
 * using a given separator character.
 *
 * This function allocates and returns a NULL-terminated array of strings,
 * where each string is a word (substring) from the original string `str`
 * separated by the character `sep`.
 *
 * Consecutive separators are ignored, meaning empty strings are not included
 * in the result. Memory for each substring and the array itself is allocated
 * dynamically and must be freed by the caller.
 *
 * Example:
 *   ft_split("hello   world 42", ' ')
 *   => ["hello", "world", "42", NULL]
 *
 * @param str The input string to split.
 * @param sep The separator character.
 * @return A NULL-terminated array of substrings, or NULL on allocation failure.
 */
char		**ft_split(char const *str, char sep);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * Check if all characters in a string are the same as 'c'.
 * Returns 1 if true, 0 otherwise.
 */
int			ft_strevery(char *str, char c);

#endif
