/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j04.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:21:07 by gduron            #+#    #+#             */
/*   Updated: 2017/03/12 12:11:07 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c);

#include "../j04/ex00/ft_iterative_factorial.c"
#include "../j04/ex01/ft_recursive_factorial.c"
#include "../j04/ex02/ft_iterative_power.c"
#include "../j04/ex03/ft_recursive_power.c"
#include "../j04/ex04/ft_fibonacci.c"
#include "../j04/ex05/ft_sqrt.c"
#include "../j04/ex06/ft_is_prime.c"
#include "../j04/ex07/ft_find_next_prime.c"
#include "../j04/ex08/ft_eight_queens_puzzle.c"
//#include "../j04/ex09/ft_sort_integer_table.c"

void ft_putchar(char c)
{
		write(1, &c, 1);
}

int main()
{
	int i = -1;
	printf("EX00 :\n");
	printf("%d < you | answer > 5040 \n",ft_iterative_factorial(7));
	printf("%d < you | answer > 0 \n",ft_iterative_factorial(13));
	while(++i < 13)
		printf("%d < you | input > %d \n",ft_iterative_factorial(i), i);
	i = -1;

	printf("\n_________________\nEX01 :\n");
	printf("%d < you | answer > 5040 \n",ft_recursive_factorial(7));
	printf("%d < you | answer > 0 \n",ft_recursive_factorial(13));
	while(++i < 13)
		printf("%d < you | input > %d \n",ft_recursive_factorial(i), i);
	i = 0;

	printf("\n_________________\nEX02 :\n");
 	printf("%d < you | answer > 3125 \n",ft_iterative_power(5, 5));
	printf("%d < you | answer > -3125 \n",ft_iterative_power(-5, 5));
	printf("%d < you | answer > 1 \n",ft_iterative_power(1, 9));
	printf("%d < you | answer > 1 \n",ft_iterative_power(5, 0));
	printf("%d < you | answer > 0 \n",ft_iterative_power(5, -3));

	printf("\n_________________\nEX03 :\n");
	printf("%d < you | answer > 3125 \n",ft_recursive_power(5, 5));
	printf("%d < you | answer > -3125 \n",ft_recursive_power(-5, 5));
	printf("%d < you | answer > 1 \n",ft_recursive_power(1, 9));
	printf("%d < you | answer > 1 \n",ft_recursive_power(5, 0));
	printf("%d < you | answer > 0 \n",ft_recursive_power(5, -3));

	printf("\n_________________\nEX04 :\n");
	printf("%d < you | answer > 55 \n",ft_fibonacci(10));
	printf("%d < you | answer > -1 \n",ft_fibonacci(-2));
	printf("%d < you | answer > 0 \n",ft_fibonacci(0));
	printf("%d < you | answer > 1 \n",ft_fibonacci(1));
	printf("%d < you | answer > 1 \n",ft_fibonacci(2));
	printf("%d < you | answer > max_val \n",ft_fibonacci(42));

	printf("\n_________________\nEX05 :\n");
	printf("%d < you | answer > 10 \n",ft_sqrt(100));
	printf("%d < you | answer > 0 \n",ft_sqrt(0));
	printf("%d < you | answer > 1 \n",ft_sqrt(1));
	printf("%d < you | answer > 2 \n",ft_sqrt(4));
	printf("%d < you | answer > 0 \n",ft_sqrt(7));
	printf("%d < you | answer > 0 \n",ft_sqrt(-100));

	printf("\n_________________\nEX06 :\n");
	printf("%d < you | answer > 1 \n",ft_is_prime(2147483647));
	printf("%d < you | answer > 1 \n",ft_is_prime(101));
	printf("%d < you | answer > 0 \n",ft_is_prime(120));
	printf("%d < you | answer > 0 \n",ft_is_prime(0));
	printf("%d < you | answer > 0 \n",ft_is_prime(1));

	printf("\n_________________\nEX07 :\n");
	i = 0;
	while(i++ < 647)
		printf("%d < you | answer > 2 \n",ft_find_next_prime(i));
	i = 2147483640;
	while(i++ < 2147483647)
		printf("%d < you | answer > 2 \n",ft_find_next_prime(i));

	printf("\n_________________\nEX08 :\n");
	printf("%d < you | answer > 92\n", ft_eight_queens_puzzle());

	printf("\n_________________\nEX09 :\n");
}
