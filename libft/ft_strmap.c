/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:03:09 by smtolo            #+#    #+#             */
/*   Updated: 2017/08/31 17:03:11 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (!s || !f)
		return (0);
	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (*s)
	{
		str[i] = f(*s++);
		i++;
	}
	str[i] = '\0';
	return (str);
}
