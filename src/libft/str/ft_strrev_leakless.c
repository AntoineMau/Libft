/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 13:29:38 by judumay           #+#    #+#             */
/*   Updated: 2019/11/07 15:14:24 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev_leakless(char *s)
{
	char		*dup;
	char		tmp;
	size_t		start;
	size_t		end;

	dup = ft_strdup(s);
	start = 0;
	end = ft_strlen(dup) - 1;
	while (dup && dup[start] && start < end)
	{
		tmp = dup[start];
		dup[start++] = dup[end];
		dup[end--] = tmp;
	}
	ft_memdel((void**)&s);
	return (dup);
}
