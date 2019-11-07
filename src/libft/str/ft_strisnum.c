/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:59:57 by judumay           #+#    #+#             */
/*   Updated: 2019/11/07 15:08:21 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisnum(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit((int)str[i]))
			return (0);
		i++;
	}
	return (1);
}
