/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <mavrin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 11:28:37 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/04 11:43:36 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int i;
	int digit[10];
	int sign;

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	sign = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	i = 0;
	while (nb != 0)
	{
		digit[i++] = nb % 10 * sign;
		nb = nb / 10;
	}
	while (i > 0)
	{
		ft_putchar(digit[--i] + 48);
	}
}
