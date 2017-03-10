/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j03.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:21:07 by gduron            #+#    #+#             */
/*   Updated: 2017/03/10 12:17:14 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c);

#include "../j03/ex00/ft_ft.c"
#include "../j03/ex01/ft_ultimate_ft.c"
#include "../j03/ex02/ft_swap.c"
#include "../j03/ex03/ft_div_mod.c"
#include "../j03/ex04/ft_ultimate_div_mod.c"
#include "../j03/ex05/ft_putstr.c"
#include "../j03/ex06/ft_strlen.c"
#include "../j03/ex07/ft_strrev.c"
#include "../j03/ex08/ft_atoi.c"
#include "../j03/ex09/ft_sort_integer_table.c"

void ft_putchar(char c)
{
		write(1, &c, 1);
}

int main()
{
	printf("EX00 :\n");
	int n = 0;
	ft_ft(&n);
	printf("%d < you | answer > 42", n);
	
	printf("\n_________________\nEX01 :\n");
	int nb0 = 0;
	int *nb1 = &nb0;
	int **nb2 = &nb1;
	int ***nb3 = &nb2;
	int ****nb4 = &nb3;
	int *****nb5 = &nb4;
	int ******nb6 = &nb5;
	int *******nb7 = &nb6;
	int ********nb8 = &nb7;
	int *********nb9 = &nb8;
	ft_ultimate_ft(nb9);
	printf("%d < you | answer > 42", *********nb9);

	printf("\n_________________\nEX02 :\n");
	int a = 123;
	int b = 10;
	ft_swap(&a, &b);
	printf("a = %d ; b = %d < you | answer > a = 10 ; b = 123",a ,b);

	printf("\n_________________\nEX03 :\n");
	int div = 0;
	int mod = 0;
	ft_div_mod(123, 10, &div, &mod);
	printf("div = %d ; mod = %d < you | answer > div = 12 ; mod = 3", div, mod);

	printf("\n_________________\nEX04 :\n");
	a = 123;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d ; b = %d < you | answer > a = 12 ; b = 3", a, b);

	printf("\n_________________\nEX05 :\n");
	char *str = "RESULT: I AM PRINTED";
	ft_putstr(str);

	printf("\n_________________\nEX06 :\n");
	char *str2 = "0123456789";
	printf("%d <you | answer> 10",ft_strlen(str2));

	printf("\n_________________\nEX07 :\n");
	char strv[] = "abcdefg";
    printf("%s < you | answer > gfedcba",ft_strrev(strv));

	printf("\n_________________\nEX08 :\n");
	printf("ATOI: 0 = %d, 10 = %d, -10 = %d, int_max = %d, int_min = %d", atoi("0"), atoi("10"), atoi("-10"), atoi("2147483647"), atoi("-2147483648"));
	printf("\nFT_ATOI: nb1 = %d, nb2 = %d, nb3 = %d, nb4 = %d, nb5 = %d", ft_atoi("0"), ft_atoi("10"), ft_atoi("-10"), ft_atoi("2147483647"), ft_atoi("-2147483648"));
	printf("\nATOI: '   -23' = %d, '  - 10' = %d, '  10 23' = %d, '\n	21' = %d", atoi("   -23"), atoi("  - 10"), atoi("  10 23"), atoi("\n\t\v\f\r 21"));
	printf("\nFT_ATOI: '   -23' = %d, '  - 10' = %d, '  10 23' = %d, '\n	21' = %d", ft_atoi("   -23"), ft_atoi("  - 10"), ft_atoi("  10 23"), ft_atoi("\n\t\v\f\r 21"));


	printf("\n_________________\nEX09 :\n");
	int tab[] = {2, 3, 8, 0, 5, -6};
	int i = 0;
	while (i < 6)
		printf("%d", tab[i++]);
	i = 0;
	ft_sort_integer_table(tab, 5);
	printf(" < base | sorted >");
	while (i < 6)
		printf("%d", tab[i++]);
}
