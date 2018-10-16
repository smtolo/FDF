/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:42:37 by smtolo            #+#    #+#             */
/*   Updated: 2017/08/31 16:42:43 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char cast;

	cast = (unsigned char)c;
	str = (unsigned char*)s;
	while (n > 0)
	{
		if (*str != cast)
			str++;
		else
			return (str);
		n--;
	}
	return (0);
}
