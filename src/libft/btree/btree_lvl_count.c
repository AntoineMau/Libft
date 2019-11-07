/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_lvl_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:21:09 by mabouce           #+#    #+#             */
/*   Updated: 2019/11/07 14:45:16 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		btree_lvl_count(t_btree *root)
{
	int		count;

	if (!root)
		return (0);
	count = 1;
	if (root->left)
		if (btree_lvl_count(root->left) + 1 > count)
			count = btree_lvl_count(root->left) + 1;
	if (root->right)
		if (btree_lvl_count(root->right) + 1 > count)
			count = btree_lvl_count(root->right) + 1;
	return (count);
}
