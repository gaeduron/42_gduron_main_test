/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:00:55 by gduron            #+#    #+#             */
/*   Updated: 2017/03/21 10:57:14 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <unistd.h>

t_list	*ft_list_push_params(int ac, char **av);
void    ft_list_foreach_if(t_list *begin_list, void (*f)(void *)\
		, void *data_ref, int (*cmp)());

void	ft_first_char(void *str)
{
	write(1,str,1);
	return ;
}

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
	void (*f)(void*);
	int (*cmp)();
	char *c = "3";

	cmp = &ft_strcmp;
	f = &ft_first_char;
	list = ft_list_push_params(ac, av);
	i_list = list;
	while (i_list)
	{
		printf("\033[90m%s -> ", i_list->data);
		i_list = i_list->next;
	}
	printf("\nprint first char of node where first char is 3\n");
	ft_list_foreach_if(list, f, c, cmp);
/*
	i_list = list;
	while (i_list)
	{
		printf("\033[90m%s -> ", i_list->data);
		i_list = i_list->next;
	}
*/
	return (0);
}
