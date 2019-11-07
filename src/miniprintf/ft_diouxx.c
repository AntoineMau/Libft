/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diouxx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 16:00:55 by mabouce           #+#    #+#             */
/*   Updated: 2019/11/07 15:07:59 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniprintf.h"

char	*ft_int(t_ms *s)
{
	long long	i;
	char		*tmp;

	i = va_arg(s->va, int);
	tmp = ft_itoa(i);
	return (tmp);
}
