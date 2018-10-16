/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:36:18 by smtolo            #+#    #+#             */
/*   Updated: 2017/09/07 15:42:21 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_numberstr(int n, char *str, unsigned int pos)
{
	unsigned int	nbr;

	pos--;
	if (n < 0)
	{
		nbr = -n;
		str[0] = '-';
	}
	else
		nbr = n;
	if (nbr >= 10)
	{
		ft_numberstr((nbr / 10), str, pos);
		str[pos] = ((nbr % 10) + '0');
	}
	else
		str[pos] = (nbr + '0');
	return (str);
}

static unsigned int	ft_lennbr(int n)
{
	unsigned int	count;
	unsigned int	nbr;

	count = 0;
	if (n < 0)
	{
		nbr = (unsigned int)-n;
		count++;
	}
	else
		nbr = (unsigned int)n;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char				*ft_itoa(int n)
{
	unsigned int	len;
	char			*str;

	len = ft_lennbr(n);
	if (n == 0)
	{
		if (!(str = ft_strnew(1)))
			return (NULL);
		str[0] = '0';
	}
	else
	{
		if (!(str = ft_strnew(len)))
			return (NULL);
		str = ft_numberstr(n, str, len);
	}
	return (str);
}
