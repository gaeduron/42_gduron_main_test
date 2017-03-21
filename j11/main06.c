/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:00:55 by gduron            #+#    #+#             */
/*   Updated: 2017/03/20 18:21:11 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);

int main(int ac, char **av)
{
	t_list *list;
	t_list *i_list;

	list = ft_list_push_params(ac, av);
	i_list = list;
	while (i_list)
	{
		printf("\033[92m%s -> ", i_list->data);
		i_list = i_list->next;
	}
	printf("\n\033[0mnow I free every node\n");
	ft_list_clear(&list);
	i_list = list;
	if (i_list == 0)
		printf("\033[92mNode has been freed");
	return (0);
}
