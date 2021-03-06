/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_csp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 16:00:43 by mabouce           #+#    #+#             */
/*   Updated: 2019/11/07 15:07:58 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniprintf.h"

char	*ft_char(t_ms *s)
{
	char	c;
	char	*tmp;

	if (!(tmp = ft_strnew(2)))
		return (NULL);
	c = va_arg(s->va, int);
	ft_memset((void *)tmp, c, 1);
	return (tmp);
}

char	*ft_string(t_ms *s)
{
	char	*tmp;
	char	*arg;

	arg = va_arg(s->va, char *);
	if (!arg)
	{
		if (!(tmp = ft_strdup("(NULL)")))
			return (NULL);
	}
	else
	{
		if (!(tmp = ft_strdup(arg)))
			return (NULL);
	}
	return (tmp);
}
