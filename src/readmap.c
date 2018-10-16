/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 14:09:36 by smtolo            #+#    #+#             */
/*   Updated: 2018/09/03 15:24:46 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>

int			strlen_with_a_twist(char *str)
{
	int		y;
	int		i;

	i = 0;
	y = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
		{
			y++;
			while (ft_isdigit(str[i]))
				i++;
		}
		i++;
	}
	return (y);
}

void		map_size(t_fdf *file)
{
	char	*line;

	line = NULL;
	if (get_next_line(file->fd, &line) > 0)
	{
		file->dimen.cols = strlen_with_a_twist(line);
		free(line);
	}
	file->dimen.rows = 1;
	while (get_next_line(file->fd, &line) > 0)
	{
		file->dimen.rows++;
		free(line);
	}
	close(file->fd);
	file->dimen.x_off = 300;
	file->dimen.y_off = 300;
	file->dimen.win_x = 2000;
	file->dimen.win_y = 2000;
	file->zoom = 10;
}

void		alloc_map_size(t_fdf *file, char **argv)
{
	int		x;

	x = 0;
	if ((file->fd = open(argv[1], O_RDONLY)) < 0)
	{
		perror("BUMMER!!!: ");
		exit(0);
	}
	map_size(file);
	if (!(file->map = (int **)ft_memalloc(sizeof(int *)
		* file->dimen.rows)))
	{
		perror("DAMN!!! ");
		exit(0);
	}
	while (x < file->dimen.rows)
	{
		if (!(file->map[x] = (int *)ft_memalloc(sizeof(int)
			* file->dimen.cols)))
		{
			perror("BLUNDER!!! ");
			exit(0);
		}
		x++;
	}
}

void		read_map(t_fdf *file, char **argv)
{
	int		x;
	int		y;
	char	*line;
	char	**split;
	int		fd;

	alloc_map_size(file, argv);
	x = 0;
	if ((fd = open(argv[1], O_RDONLY)) < 0)
	{
		ERROR;
	}
	while (get_next_line(fd, &line) > 0)
	{
		split = ft_strsplit(line, ' ');
		y = 0;
		while (split[y] && y < file->dimen.cols)
		{
			file->map[x][y] = ft_atoi(split[y]);
			free(split[y]);
			y++;
		}
		x++;
		FREEDOM;
	}
}
