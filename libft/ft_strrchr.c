/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:07:25 by smtolo            #+#    #+#             */
/*   Updated: 2017/08/31 17:07:35 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*var;
	int		n;

	n = ft_strlen(s);
	var = 0;
	while (n >= 0)
	{
		if (*s == (char)c)
			var = (char*)s;
		s++;
		n--;
	}
	return (var);
}
