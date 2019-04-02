/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:57:25 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/02 16:58:57 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		ft_count_if(char **tab, int (*f)(char*));

int		check_a(char *str)
{
	while (*str)
	{
		if (*str == 'a')
			return (1);
		str++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (0);
	}
	printf("Parameters with 'a' in it: %d\n", ft_count_if(argv, check_a));
}
