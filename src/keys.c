/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:31:39 by smtolo            #+#    #+#             */
/*   Updated: 2018/08/30 11:31:05 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		cool_key_func(int keycode)
{
	if (keycode == 53)
		exit(0);
	return (1);
}