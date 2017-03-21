/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:00:55 by gduron            #+#    #+#             */
/*   Updated: 2017/03/20 14:07:14 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_back(t_list **begin_list, void *data);

int main()
{
	t_list *list;
	char *str = "Result: \033[92mhead ->";
	char *str2 = "\033[93m middle ->";
	list = ft_create_elem(str);
	ft_list_push_back(&list, str2);
	ft_list_push_back(&list, "\033[93m middle2 ->");
	ft_list_push_back(&list, "\033[93m middle3 ->");
	ft_list_push_back(&list, "\033[96m tail");
	while (list)
	{
		printf("%s", list->data);
		list = list->next;
	}
}
