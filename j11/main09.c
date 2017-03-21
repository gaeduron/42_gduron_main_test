/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:00:55 by gduron            #+#    #+#             */
/*   Updated: 2017/03/21 09:55:22 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <unistd.h>

t_list	*ft_list_push_params(int ac, char **av);
void ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_strupcase(void *str)
{
	write(1,str,1);
	return ;
}

int main(int ac, char **av)
{
	t_list *list;
	t_list *i_list;
	void (*f)(void*);

	f = &ft_strupcase;
	list = ft_list_push_params(ac, av);
	i_list = list;
	while (i_list)
	{
		printf("\033[90m%s -> ", i_list->data);
		i_list = i_list->next;
	}
	printf("\nlinked list to MAJ\n");
	ft_list_foreach(list, f);
	i_list = list;
	while (i_list)
	{
		printf("\033[90m%s -> ", i_list->data);
		i_list = i_list->next;
	}
	return (0);
}
