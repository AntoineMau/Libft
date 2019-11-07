/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:37:56 by mabouce           #+#    #+#             */
/*   Updated: 2019/11/07 14:37:39 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_free(t_btree **root)
{
	if (!root || !*root)
		return ;
	if ((*root)->left)
		btree_free(&((*root)->left));
	if ((*root)->right)
		btree_free(&((*root)->right));
	free(*root);
	return ;
}
