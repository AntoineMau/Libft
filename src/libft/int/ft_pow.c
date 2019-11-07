/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 09:54:13 by judumay           #+#    #+#             */
/*   Updated: 2019/11/07 15:14:24 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int x, int y)
{
	int		ret;
	int		neg;

	neg = y > 0 ? 0 : 1;
	ret = 1;
	if (x == 1 || y == 0)
		return (1);
	else if (x == 0)
		return (0);
	if (neg)
		y = -y;
	while (y)
	{
		ret = ret * x;
		y--;
	}
	if (neg)
		ret = 1 / ret;
	return (ret);
}
