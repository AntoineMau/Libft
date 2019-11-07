/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 13:48:01 by mabouce           #+#    #+#             */
/*   Updated: 2019/11/07 15:06:43 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;
	t_list	*save;

	i = 0;
	if (ac <= 0)
		return (0);
	save = 0;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = save;
		save = list;
		i++;
	}
	return (list);
}
