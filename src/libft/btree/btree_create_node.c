/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 08:44:17 by mabouce           #+#    #+#             */
/*   Updated: 2019/11/07 14:36:51 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree		*btree_create_node(void *content)
{
	t_btree	*new;

	if (!(new = malloc(sizeof(t_btree))))
		return (NULL);
	new->content = !content ? NULL : content;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
