/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <mavrin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:12:19 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/04 14:20:47 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str);
int		is_numeric(char c);

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_numeric(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		is_numeric(char c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	return (1);
}
