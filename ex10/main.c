/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:37:16 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/01 15:38:45 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int *aa;
	int b;
	int *bb;

	a = 1;
	aa = &a;
	b = 2;
	bb = &b;
	printf("a: %d, b: %d\n", a, b);
	ft_swap(aa, bb);
	printf("a: %d, b: %d\n", a, b);
	return (0);
}
