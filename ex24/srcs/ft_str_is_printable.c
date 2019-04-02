/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <mavrin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:12:19 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/04 14:49:09 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str);
int		is_printable(char c);

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		is_printable(char c)
{
	if (c < 33 || c > 126)
	{
		return (0);
	}
	return (1);
}
