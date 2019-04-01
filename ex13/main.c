/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:46:16 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/01 15:54:06 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int a;

	a = -1;
	printf("a: %d, ft_recursive_factorial: %d\n", a, ft_recursive_factorial(a));
	a = 0;
	printf("a: %d, ft_recursive_factorial: %d\n", a, ft_recursive_factorial(a));
	a = 1;
	printf("a: %d, ft_recursive_factorial: %d\n", a, ft_recursive_factorial(a));
	a = 2;
	printf("a: %d, ft_recursive_factorial: %d\n", a, ft_recursive_factorial(a));
	a = 3;
	printf("a: %d, ft_recursive_factorial: %d\n", a, ft_recursive_factorial(a));
	a = 4;
	printf("a: %d, ft_recursive_factorial: %d\n", a, ft_recursive_factorial(a));
	a = 5;
	printf("a: %d, ft_recursive_factorial: %d\n", a, ft_recursive_factorial(a));
	a = 6;
	printf("a: %d, ft_recursive_factorial: %d\n", a, ft_recursive_factorial(a));
	a = 7;
	printf("a: %d, ft_recursive_factorial: %d\n", a, ft_recursive_factorial(a));
	a = 100;
	printf("a: %d, ft_recursive_factorial: %d\n", a, ft_recursive_factorial(a));
}
