/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:07:55 by smtolo            #+#    #+#             */
/*   Updated: 2017/09/01 15:07:07 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	res;

	i = 0;
	len = ft_strlen(str);
	while (len - 1 > i)
	{
		res = str[i];
		str[i] = str[len - 1];
		str[len - 1] = res;
		len--;
		i++;
	}
	return (str);
}
