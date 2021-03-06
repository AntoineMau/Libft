/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 17:58:57 by judumay           #+#    #+#             */
/*   Updated: 2019/03/11 17:58:58 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftprintf.h>

t_printf		*ft_printf_conv(t_printf *p)
{
	__int32_t	i;

	i = 0;
	while (i < 9 && !p->error)
		p = p->tab_ptr[i++](p);
	return (p);
}
