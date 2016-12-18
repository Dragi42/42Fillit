/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ntabs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmuller <fmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:26:16 by fmuller           #+#    #+#             */
/*   Updated: 2016/12/08 18:02:47 by fmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_ntabs(char **tab, size_t len)
{
	size_t	n;

	n = 0;
	while (n < len)
	{
		ft_putendl(tab[n]);
		n++;
	}
}