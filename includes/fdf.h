/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 10:38:19 by smtolo            #+#    #+#             */
/*   Updated: 2018/09/03 15:24:29 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft.h"
# include "mlx.h"
# include <math.h>
# include <fcntl.h>
# include <stdlib.h>
# define COL 0X00FFFFFF
# define WHITE 16777215
# define ERROR perror("BUMMER!!! ");exit(0);
# define FREEDOM free(split);free(line);

typedef struct	s_dimensions
{
	int			rows;
	int			cols;
	int			win_x;
	int			win_y;
	int			x_off;
	int			y_off;
}				t_dimen;

typedef struct	s_fdf
{
	void		*mlx;
	void		*win;
	int			**map;
	int			zoom;
	int			fd;
	t_dimen		dimen;
}				t_fdf;

typedef struct	s_point
{
	int			x;
	int			y;
	int			z;
}				t_point;

typedef struct	s_pair
{
	t_point		p1;
	t_point		p2;
}				t_pair;

void			map_size(t_fdf *file);
void			alloc_map_size(t_fdf *file, char **argv);
int				cool_key_func(int keycode);
void			draw_cols(t_fdf *draw);
void			draw_rows(t_fdf *draw);
void			drawmap(t_fdf *draw);
void			read_map(t_fdf *file, char **argv);

#endif
