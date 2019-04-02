/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:09:54 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/02 16:11:53 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char	*ft_strdup(char *src);

int		main(void)
{
	char *dst;

	dst = ft_strdup("test");
	printf("%s\n", dst);
	return (0);
}
