/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:25:01 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/01 15:32:46 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	return (0);
}
