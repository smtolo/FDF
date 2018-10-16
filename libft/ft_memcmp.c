/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:43:07 by smtolo            #+#    #+#             */
/*   Updated: 2017/08/31 16:43:13 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*dest;
	const unsigned char	*src;

	dest = (unsigned char*)s1;
	src = (unsigned char*)s2;
	while (n > 0)
	{
		if (*dest != *src)
			return (*dest - *src);
		else
		{
			dest++;
			src++;
			n--;
		}
	}
	return (0);
}
