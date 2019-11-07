/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 16:16:04 by mabouce           #+#    #+#             */
/*   Updated: 2019/11/07 15:06:32 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *save;

	save = *begin_list;
	while ((*begin_list))
	{
		save = (*begin_list);
		(*begin_list) = (*begin_list)->next;
		free(save);
	}
}
