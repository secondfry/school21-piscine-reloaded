/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:10:02 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/01 16:23:15 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("strcmp is %d\n", ft_strcmp("aaa", "aaa"));
	printf("strcmp is %d\n", ft_strcmp("aaa", "aab"));
	printf("strcmp is %d\n", ft_strcmp("aaa", "ab"));
	printf("strcmp is %d\n", ft_strcmp("aaa", "b"));
	printf("strcmp is %d\n", ft_strcmp("aaa", "aaa"));
	printf("strcmp is %d\n", ft_strcmp("aab", "aaa"));
	printf("strcmp is %d\n", ft_strcmp("ab", "aaa"));
	printf("strcmp is %d\n", ft_strcmp("b", "aaa"));
	return (0);
}
