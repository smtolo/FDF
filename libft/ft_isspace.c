/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:35:46 by smtolo            #+#    #+#             */
/*   Updated: 2017/09/01 13:21:49 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	c = (unsigned char)c;
	if (c == ' ' || c == '\t' || c == '\v' ||
			c == '\n' || c == '\r' || c == '\f')
		return (1);
	return (0);
}
