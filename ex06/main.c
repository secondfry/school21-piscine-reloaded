/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:25:01 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/01 15:28:46 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
