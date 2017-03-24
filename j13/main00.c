/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 07:30:06 by gduron            #+#    #+#             */
/*   Updated: 2017/03/22 07:35:58 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

int main()
{
	t_btree *node1;
	node1 = btree_create_node("B_Tree node creation: \033[92mOK\n");
	printf("%s", node1->item);
	return(0);
}
