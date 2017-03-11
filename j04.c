/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j04.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:21:07 by gduron            #+#    #+#             */
/*   Updated: 2017/03/10 16:25:21 by gduron           ###   ########.fr       */
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
//#include "../j04/ex07/ft_strrev.c"
//#include "../j04/ex08/ft_atoi.c"
//#include "../j04/ex09/ft_sort_integer_table.c"

void ft_putchar(char c)
{
		write(1, &c, 1);
}

int main()
{
	printf("EX00 :\n");
	printf("%d < you | answer > 5040 \n",ft_iterative_factorial(7));
	printf("%d < you | answer > 0 \n",ft_iterative_factorial(13));

	printf("\n_________________\nEX01 :\n");
	printf("%d < you | answer > 5040 \n",ft_recursive_factorial(7));
	printf("%d < you | answer > 0 \n",ft_iterative_factorial(13));

	printf("\n_________________\nEX02 :\n");
 	printf("%d < you | answer > 3125 \n",ft_iterative_power(5, 5));
	printf("%d < you | answer > 3125 \n",ft_iterative_power(5, -3));

	printf("\n_________________\nEX03 :\n");
	printf("%d < you | answer > 3125 \n",ft_recursive_power(5, 5));
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
	printf("%d < you | answer > 0 \n",ft_sqrt(7));
	printf("%d < you | answer > 10 \n",ft_sqrt(-100));

	printf("\n_________________\nEX06 :\n");
	printf("%d < you | answer > 10 \n",ft_is_prime(41));
	printf("%d < you | answer > 10 \n",ft_is_prime(101));
	printf("%d < you | answer > 10 \n",ft_is_prime(120));

	printf("\n_________________\nEX07 :\n");

	printf("\n_________________\nEX08 :\n");

	printf("\n_________________\nEX09 :\n");
}
