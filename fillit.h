/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 15:30:20 by dpaunovi          #+#    #+#             */
/*   Updated: 2016/12/18 15:30:22 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "Libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# define BUFF_SIZE 21 * 26

typedef struct	s_point
{
	size_t	x;
	size_t	y;
}				t_point;

typedef struct	s_point3
{
	size_t	k;
	size_t	x;
	size_t	y;
}				t_point3;

int				ft_error(int argc, char **argv, char ***tab);

char			**ft_read_tetris(char *argv);

char			*ft_alphabet(char *tab, int id);
void			ft_replacetab(char **tab, int nbtetris);

char			***ft_convert(char **tab, size_t nbtetri);

size_t			ft_estimate_square_size(size_t	nbtetri);
char			**ft_create_square(size_t square_size);
void			ft_free_square(char **square);

int				ft_test(char ***tab, int i, char **square);

#endif
