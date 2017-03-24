/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 07:30:06 by gduron            #+#    #+#             */
/*   Updated: 2017/03/23 15:33:18 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	btree_apply_infix(t_btree *root, void (*applyf)(void *));

/*void add_branche(void *parent)
{
	if (parent->left == 0)
		parent->left = btree_create_node(parent->item--);
	if (parent->right == 0)
		parent->right = btree_create_node(parent->item);
}
*/
void print_item(void *item)
{
	printf("%s", item);
}

int main()
{
	t_btree *node1;
//	void (*add)(t_btree*);
	void (*print)(void*);
	char *str;

	str = "coucou ";
//	add = &add_branche;
	print = &print_item;
	node1 = btree_create_node(str);
	node1->right = btree_create_node("amis\n");
	node1->left = btree_create_node("les ");
	node1->left->left = btree_create_node("meilleurs ");
//	btree_apply_prefix(node1, add);
	btree_apply_infix(node1, print);

	return(0);
}
