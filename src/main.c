/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 14:27:47 by smtolo            #+#    #+#             */
/*   Updated: 2018/09/03 15:49:26 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	t_fdf	*win;

	if (!(win = (t_fdf *)malloc(sizeof(t_fdf))))
	{
		perror("Mistake! ");
		exit(0);
	}
	if (ac == 2 && ft_strrchr(av[1], '.') != NULL &&\
		(ft_strcmp(ft_strrchr(av[1], '.'), ".fdf") == 0\
		|| ft_strcmp(ft_strrchr(av[1], '.'), ".txt") == 0))
	{
		if (win->mlx == NULL)
			return (0);
		win->mlx = mlx_init();
		win->win = mlx_new_window(win->mlx, 2000, 2000, "win");
		read_map(win, av);
		drawmap(win);
		mlx_key_hook(win->win, cool_key_func, 0);
		mlx_loop(win->mlx);
	}
	ft_putendl("ERROR: PASS ONE \".fdf\" || \".txt\" file");
	free(win);
	return (0);
}
