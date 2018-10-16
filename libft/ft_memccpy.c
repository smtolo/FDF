/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:41:41 by smtolo            #+#    #+#             */
/*   Updated: 2017/08/31 16:41:46 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	cast;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	cast = (unsigned char)c;
	while (n > 0)
	{
		*s1 = *s2;
		if (*s1 == cast)
		{
			s1++;
			s2++;
			return (s1);
		}
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (NULL);
	return (0);
}
