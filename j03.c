/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j03.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:21:07 by gduron            #+#    #+#             */
/*   Updated: 2017/03/08 22:26:06 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

#include "../j03/ex00/ft_print_alphabet.c"
#include "../j03/ex01/"
#include "../j03/ex02/"
#include "../j03/ex03/"
#include "../j03/ex04/"
#include "../j03/ex05/"
#include "../j03/ex06/"
#include "../j03/ex07/"
#include "../j03/ex08/"
#include "../j03/ex09/"

void ft_putchar(char c)
{
		write(1, &c, 1);
}

int main()
{
	printf("EX00 :\n");
	
	printf("\n_________________\nEX01 :\n");
	
	printf("\n_________________\nEX02 :\n");

	printf("\n_________________\nEX03 :\n");

	printf("\n_________________\nEX04 :\n");

	printf("\n_________________\nEX05 :\n");

	printf("\n_________________\nEX06 :\n");

	printf("\n_________________\nEX07 :\n");

	printf("\n_________________\nEX08 :\n");

	printf("\n_________________\nEX09 :\n");

}
