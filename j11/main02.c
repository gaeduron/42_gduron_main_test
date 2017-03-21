/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:00:55 by gduron            #+#    #+#             */
/*   Updated: 2017/03/20 15:13:58 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_front(t_list **begin_list, void *data);

int main()
{
	t_list *list;
	char *str = "\033[92m node1 \033[1;30m-> NULL\n";
	char *str2 = "\033[93m node2 ->";
	list = ft_create_elem(str);
	ft_list_push_front(&list, str2);
	ft_list_push_front(&list, "\033[93m node3 ->");
	ft_list_push_front(&list, "\033[93m node4 ->");
	ft_list_push_front(&list, "\033[96m head ->");
	while (list)
	{
		printf("%s", list->data);
		list = list->next;
	}
}
