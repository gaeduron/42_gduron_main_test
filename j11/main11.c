/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:00:55 by gduron            #+#    #+#             */
/*   Updated: 2017/03/21 11:21:26 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <unistd.h>

t_list	*ft_list_push_params(int ac, char **av);
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int main(int ac, char **av)
{
	t_list *list;
	t_list *i_list;
	int (*cmp)();
	char *c = "3";

	cmp = &ft_strcmp;
	list = ft_list_push_params(ac, av);
	i_list = list;
	while (i_list)
	{
		printf("\033[90m%s -> ", i_list->data);
		i_list = i_list->next;
	}
	printf("\nprint str of node where first char is 3\n");
	printf("\033[90m%s -> ", ft_list_find(list, c, cmp)->data);
	return (0);
}
