/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexatoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:18:06 by judumay           #+#    #+#             */
/*   Updated: 2019/11/07 15:03:38 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** val = val * 16 + byte;
*/

#include "libft.h"

int		ft_hexatoi(char *hex, int len)
{
	unsigned int	val;
	int				i;
	char			byte;

	val = 0;
	i = -1;
	while (++i < len && hex[i])
	{
		byte = hex[i];
		if (byte >= '0' && byte <= '9')
			byte = byte - '0';
		else if (byte >= 'a' && byte <= 'f')
			byte = byte - 'a' + 10;
		else if (byte >= 'A' && byte <= 'F')
			byte = byte - 'A' + 10;
		val = (val << 4) | (byte & 0xF);
	}
	return (val);
}
