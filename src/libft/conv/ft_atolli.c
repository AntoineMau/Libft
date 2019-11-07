/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolli.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:02:30 by judumay           #+#    #+#             */
/*   Updated: 2019/11/07 14:55:15 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_atolli(const char *str)
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
	if (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		while (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + str[i++] - '0';
	return (nb * neg);
}