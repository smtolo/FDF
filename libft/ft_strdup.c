/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:59:14 by smtolo            #+#    #+#             */
/*   Updated: 2017/08/31 16:59:26 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	int		i;
	int		l;
	char	*dest;

	i = 0;
	l = ft_strlen((char*)str);
	dest = (char*)malloc(sizeof(*dest) * (l + 1));
	if (!dest)
		return (NULL);
	while (str[i] && str)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
