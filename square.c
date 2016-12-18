/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 15:31:20 by dpaunovi          #+#    #+#             */
/*   Updated: 2016/12/18 15:31:22 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
**Calcule la taille minimum du carrer em fonction du nombre de tetriminos
*/

size_t	ft_estimate_square_size(size_t nbtetri)
{
	size_t	square_size;

	square_size = 1;
	while ((square_size * square_size) < (nbtetri * 4))
		square_size++;
	return (square_size);
}

/*
**Crer un carre de "square_size" de cote, remplie de '.'
*/

char	**ft_create_square(size_t square_size)
{
	char	**square;
	size_t	n;

	square = ft_memalloc(sizeof(char *) * (square_size + 1));
	n = 0;
	while (n < square_size)
	{
		square[n] = ft_memalloc(sizeof(char) * (square_size + 1));
		ft_memset(square[n], '.', square_size);
		n++;
	}
	return (square);
}

/*
**Free le carre (pour pouvoir en recreer un plus grand)
*/

void	ft_free_square(char **square)
{
	size_t	n;

	n = 0;
	while (square[n])
	{
		ft_memdel((void **)&square[n]);
		n++;
	}
	ft_memdel((void **)&square[n]);
	ft_memdel((void **)&square);
}
