/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j02.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 22:46:15 by gduron            #+#    #+#             */
/*   Updated: 2017/03/08 21:14:14 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

#include "../j02/ex00/ft_print_alphabet.c"
#include "../j02/ex01/ft_print_reverse_alphabet.c"
#include "../j02/ex02/ft_print_numbers.c"
#include "../j02/ex03/ft_is_negative.c"
#include "../j02/ex04/ft_print_comb.c"
#include "../j02/ex05/ft_print_comb2.c"
#include "../j02/ex06/ft_putnbr.c"
#include "../j02/ex07/ft_print_combn.c"

void ft_putchar(char c)
{
		write(1, &c, 1);
}

int main()
{
//	int i = 1;

	printf("EX00 :\n");
	ft_print_alphabet();
	
	printf("\n_________________\nEX01 :\n");
	ft_print_reverse_alphabet();
	
	printf("\n_________________\nEX02 :\n");
	ft_print_numbers();

	printf("\n_________________\nEX03 :\n");
	ft_is_negative(10);
	ft_is_negative(0);
	ft_is_negative(-10);
	printf(" < you | answer: PPN");

	printf("\n_________________\nEX04 :\n");
	ft_print_comb();

	printf("\n_________________\nEX05 :\n");
	ft_print_comb2();

	printf("\n_________________\nEX06 :\n");
	ft_putnbr(123456);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');

	printf("answer1 : 123456\n");
	printf("answer2 : 0\n");
	printf("answer3 : -42\n");
	printf("answer3 : -2147483648\n");

	printf("\n_________________\nEX07 :\n");
	ft_print_combn(5);

}
