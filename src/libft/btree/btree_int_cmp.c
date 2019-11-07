/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_int_cmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:01:21 by mabouce           #+#    #+#             */
/*   Updated: 2019/11/07 14:45:25 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		btree_int_cmp(void *c1, void *c2)
{
	long long	a;
	long long	b;

	a = (long long)c1;
	b = (long long)c2;
	return (a - b);
}
