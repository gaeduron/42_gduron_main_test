/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:00:55 by gduron            #+#    #+#             */
/*   Updated: 2017/03/20 15:58:32 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_list_last(t_list *begin_list);

int main()
{
	t_list *list;
	t_list *i_list;

	char *str = "\033[92mnode1 \033[1;30m-> NULL\033[0m\n";
	char *str2 = "node2 -> ";
	list = ft_create_elem(str);
	ft_list_push_front(&list, str2);
	ft_list_push_front(&list, "node3 -> ");
	ft_list_push_front(&list, "node4 -> ");
	ft_list_push_front(&list, "\033[93m head -> \033[0m");
	i_list = list;
	while (i_list)
	{
		printf("%s", i_list->data);
		i_list = i_list->next;
	}
	printf("Last node is: %s", ft_list_last(list)->data);
	return (0);
}
