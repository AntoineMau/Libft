/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 22:56:35 by mabouce           #+#    #+#             */
/*   Updated: 2019/11/07 15:06:39 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_push_back_int(t_list **begin_list, int i)
{
	t_list *tmp;

	if (*begin_list && begin_list)
	{
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		if (!(tmp->next = ft_create_elem_int(i)))
			return (0);
	}
	else
	{
		if (!((*begin_list) = ft_create_elem_int(i)))
			return (0);
	}
	return (1);
}
