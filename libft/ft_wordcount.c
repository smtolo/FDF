/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:11:51 by smtolo            #+#    #+#             */
/*   Updated: 2017/09/01 15:06:40 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	if (s)
	{
		while (s[i] == c)
			s++;
		while (s[i])
		{
			if (i == 0 && s[i] != c)
				word++;
			else if (s[i] != c && s[i - 1] == c)
				word++;
			i++;
		}
	}
	return (word);
}
