/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:00:55 by gduron            #+#    #+#             */
/*   Updated: 2017/03/20 15:44:20 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);

int main()
{
	t_list *list;
	t_list *i_list;

	char *str = "\033[97mnode1 \033[1;30m-> NULL\033[0m\n";
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
	printf("Node number: \033[1;32m%d\033[0m\n", ft_list_size(list));
	printf("Second test: \033[1;32m%d\n", ft_list_size(list));
	return (0);
}
