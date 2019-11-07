/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolli_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 11:39:16 by judumay           #+#    #+#             */
/*   Updated: 2019/11/07 15:03:10 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_nbr_inbase(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
	(c >= 'a' && c <= ('a' + base - 10)));
}

long long			ft_atolli_base(const char *str, int base)
{
	int			i;
	int			neg;
	long long	nb;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ')
		i++;
	neg = str[i] == '-' ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	nb = 0;
	while (str[i] && ft_nbr_inbase(str[i], base))
		if (str[i] >= 'A' && str[i] <= 'F')
			nb = (nb * base) + (str[i++] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			nb = (nb * base) + (str[i++] - 'a' + 10);
		else
			nb = (nb * base) + (str[i++] - '0');
	return (nb * neg);
}