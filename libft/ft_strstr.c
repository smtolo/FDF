/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:09:15 by smtolo            #+#    #+#             */
/*   Updated: 2017/08/31 17:09:18 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	if (*little == '\0' && *big == '\0')
		return ((char*)big);
	while (big[a])
	{
		b = a;
		c = 0;
		if (little[c] == '\0')
			return ((char*)(&big[a]));
		while (big[b] && little[c] && big[b] == little[c])
		{
			b++;
			c++;
			if (little[c] == '\0')
				return ((char*)(&big[a]));
		}
		a++;
	}
	return (0);
}
