/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longlong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 16:01:54 by mabouce           #+#    #+#             */
/*   Updated: 2019/11/07 15:08:01 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniprintf.h"

void	ft_check_longlong(t_ms *s)
{
	if (s->format[s->i] && s->format[s->i] == 'l')
		s->i++;
	else
		return ;
	if (s->format[s->i] && s->format[s->i] == 'l')
	{
		s->i++;
		s->longlong = 1;
	}
	else
		return ;
}

int		ft_fill_longlong(t_ms *s)
{
	if (s->format[s->i] == 'd' || s->format[s->i] == 'i')
		return (1);
	else
		ft_error_miniprintf(s, -3);
	return (0);
}

char	*ft_longlong(t_ms *s)
{
	long long	i;
	char		*tmp;

	i = va_arg(s->va, long long);
	tmp = ft_lltoa(i);
	return (tmp);
}
