/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 07:30:06 by gduron            #+#    #+#             */
/*   Updated: 2017/03/24 12:08:38 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

int btree_level_count(t_btree *root);

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if(root)
	{
		btree_apply_prefix(root->left, applyf);
		(*applyf)(root->item);
		btree_apply_prefix(root->right, applyf);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - * s2);
}

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

void print_item(void *item)
{
	printf("%s", item);
}

int main()
{
	t_btree *root;
	int (*cmpf)(char *, char *);
	void (*print)(void*);
	char *str;

	print = &print_item;
	cmpf = &ft_strcmp;
	root = 0;
	btree_insert_data(&root, "4", cmpf);
	btree_insert_data(&root, "3", cmpf);
	btree_insert_data(&root, "4", cmpf);
	btree_insert_data(&root, "5", cmpf);
	btree_insert_data(&root, "2", cmpf);
	btree_insert_data(&root, "1", cmpf);
	btree_insert_data(&root, "0", cmpf);
	btree_apply_prefix(root, print);
	printf("\n%d", btree_level_count(root));
	return(0);
}
