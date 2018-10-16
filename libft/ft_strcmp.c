/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:56:56 by smtolo            #+#    #+#             */
/*   Updated: 2017/08/31 16:57:02 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char*)s1;
	src = (unsigned char*)s2;
	i = 0;
	while (dst[i] || src[i])
	{
		if (dst[i] < src[i])
			return (dst[i] - src[i]);
		if (dst[i] > src[i])
			return (dst[i] - src[i]);
		i++;
	}
	return (0);
}
