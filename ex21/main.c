/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:17:04 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/02 16:21:09 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		*ft_range(int min, int max);

int		main(void)
{
	int i;
	int min;
	int max;
	int *test;

	i = 0;
	min = 13;
	max = 20;
	test = ft_range(min, max);
	if (!test)
	{
		printf("test is dead\n");
	}
	while (i < max - min)
	{
		printf("i: %d, data: %d\n", i, test[i]);
		i++;
	}
}
