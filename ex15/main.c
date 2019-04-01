/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:10:02 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/01 16:11:06 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_putstr("Hooray!");
	return (0);
}
