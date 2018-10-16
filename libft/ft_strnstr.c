/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:06:57 by smtolo            #+#    #+#             */
/*   Updated: 2017/09/01 14:58:54 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *lit, size_t n)
{
	size_t		len;

	len = ft_strlen(lit);
	if (len == 0)
		return ((char *)big);
	while (*big && len <= n--)
	{
		if (ft_memcmp(big++, lit, len) == 0)
			return ((char *)big - 1);
	}
	return (NULL);
}
