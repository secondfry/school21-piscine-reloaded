/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:56:48 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/01 16:00:02 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		ft_sqrt(int nb);

int		main(void)
{
	int a;

	a = 0;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = -1;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 1;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 2;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 3;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 4;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 5;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 6;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 7;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 8;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 9;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 2147395600;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	a = 2147483647;
	printf("nb: %d, ft_sqrt(nb): %d\n", a, ft_sqrt(a));
	return (0);
}
