/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfidimal <mfidimal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:52:44 by mfidimal          #+#    #+#             */
/*   Updated: 2024/02/21 08:15:24 by mfidimal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	int	*dest_trans;
	int	*src_trans;
	int	i;

	if (dest == src || size == 0)
	{
		return (dest);
	}
	dest_trans = (int *)dest;
	src_trans = (int *)src;
	if (dest_trans > src_trans && (dest_trans - src_trans) < (int)size)
	{
		i = size - 1;
		while (i >= 0)
		{
			dest_trans[i] = src_trans[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(dest, src, size);
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define ELEMENT_COUNT 10

// int	main(void)
// {
// 	void	*source;
// 	void	*destination;
// 	size_t	size;

// 	// On crée une zone de mémoire de 10 entiers et contenant
// 	// que neuf valeurs. La dixième est non utilisée (0).
// 	int data[] = {20, 30, 40, 50, 60, 70, 80, 90, 100, 0};
// 	// On affiche le contenu de la collection
// 	for (int i = 0; i < ELEMENT_COUNT; i++)
// 	{
// 		printf("%d ", data[i]);
// 	}
// 	printf("\n");
// 	// On décale les éléménts dans la collection ...
// 	source = (void *)data;
// 	destination = (void *)(data + 1);
// 	size = ELEMENT_COUNT;
// 	ft_memmove(destination, source, size);
// 	// ... pour y insérer une nouvelle valeur en tête
// 	data[0] = 10;
// 	// On affiche le contenu de la collection
// 	for (int i = 0; i < ELEMENT_COUNT; i++)
// 	{
// 		printf("%d ", data[i]);
// 	}
// 	puts(""); // Un retour à la ligne
// 	return (EXIT_SUCCESS);
// }
