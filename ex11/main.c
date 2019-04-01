/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:37:16 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/01 15:42:35 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int *aa;
	int b;
	int *bb;
	int c;
	int *div;
	int d;
	int *mod;

	a = 130;
	aa = &a;
	b = 57;
	bb = &b;
	c = -1;
	div = &c;
	d = -1;
	mod = &d;
	printf("a: %d, b: %d, *div: %d, *mod: %d\n", a, b, *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("a: %d, b: %d, *div: %d, *mod: %d\n", a, b, *div, *mod);
	return (0);
}
