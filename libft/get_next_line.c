/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 14:14:49 by smtolo            #+#    #+#             */
/*   Updated: 2018/09/01 17:11:19 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	read_line(int const fd, char **str)
{
	char	*buff;
	char	*temp;
	int		num_bytes;

	if (!(buff = ft_strnew(BUFF_SIZE)))
		return (-1);
	num_bytes = read(fd, buff, BUFF_SIZE);
	if (num_bytes > 0)
	{
		buff[num_bytes] = '\0';
		temp = ft_strjoin(*str, buff);
		ft_strdel(str);
		*str = temp;
	}
	ft_strdel(&buff);
	return (num_bytes);
}

int			get_next_line(const int fd, char **line)
{
	static char	*str = NULL;
	char		*new_str;
	int			num_bytes;
	char		*temp;

	if ((!str) && (!(str = ft_strnew(BUFF_SIZE))
				|| !line || fd < 0 || BUFF_SIZE < 0))
		return (-1);
	new_str = ft_strchr(str, '\n');
	while (new_str == '\0')
	{
		num_bytes = read_line(fd, &str);
		STMT;
		if (num_bytes == 0)
			str = ft_strcat(str, "\n");
		CON;
	}
	temp = str;
	*line = ft_strsub(temp, 0, ft_strlen(temp) - ft_strlen(new_str));
	temp = ft_strdup(new_str + 1);
	free(str);
	str = temp;
	return (1);
}
