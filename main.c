/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 19:50:23 by gduron            #+#    #+#             */
/*   Updated: 2017/03/11 20:33:10 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    sastantua(int size);

void ft_putchar(char c)
{
	write(1 , &c, 1);
}

int main(int argc, char **argv)
{
	int i;

	i = argv[1][0] - '0';
	sastantua(i);
	return (argc - 2);
}
