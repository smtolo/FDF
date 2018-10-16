/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 14:15:05 by smtolo            #+#    #+#             */
/*   Updated: 2018/09/01 17:11:05 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# define BUFF_SIZE 500
# define CON if (num_bytes < 0)return (-1);else new_str = ft_strchr(str, '\n');
# define STMT if (num_bytes == 0 && ft_strlen(str) == 0)return (0);

int	get_next_line(int const fd, char **line);

#endif
