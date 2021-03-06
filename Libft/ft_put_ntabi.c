/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ntabi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmuller <fmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 18:17:52 by fmuller           #+#    #+#             */
/*   Updated: 2016/11/25 18:24:20 by fmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_ntabi(int *tab, size_t len)
{
	size_t	n;

	n = 0;
	while (n < len)
	{
		ft_putnbr(tab[n]);
		ft_putchar('\n');
		n++;
	}
}
