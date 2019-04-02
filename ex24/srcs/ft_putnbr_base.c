/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_predelete.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <mavrin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 15:58:39 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/04 16:40:12 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr_base(int nbr, char *base);
int		is_valid_base(char *base);
void	table_sort(int *table, int size);
int		table_check(int *table, int size);
int		get_sign(int nbr);

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int digit[255];
	int sign;
	int base_size;

	base_size = is_valid_base(base);
	if (base_size == -1)
	{
		return ;
	}
	sign = get_sign(nbr);
	i = 0;
	while (nbr != 0)
	{
		digit[i++] = nbr % base_size * sign;
		nbr = (nbr - nbr % base_size) / base_size;
	}
	while (i > 0)
	{
		ft_putchar(base[digit[--i]]);
	}
}

int		is_valid_base(char *base)
{
	int checker[255];
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] < '0' || (base[i] > '9' && base[i] < 'A')
			|| (base[i] > 'Z' && base[i] < 'a') || base[i] > 'z')
		{
			return (-1);
		}
		checker[i] = base[i];
		i++;
	}
	table_sort(checker, i);
	if (i < 2 || !table_check(checker, i))
	{
		return (-1);
	}
	return (i);
}

void	table_sort(int *table, int size)
{
	int i;
	int q;
	int buffer;

	i = 0;
	while (i < size)
	{
		q = 0;
		while (q < size)
		{
			if (table[i] < table[q])
			{
				buffer = table[i];
				table[i] = table[q];
				table[q] = buffer;
			}
			q++;
		}
		i++;
	}
}

int		table_check(int *table, int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (table[i] == table[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		get_sign(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		return (-1);
	}
	return (1);
}
