/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <mavrin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 12:45:16 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/05 15:28:05 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		ft_strstr_compare(char *str_a, char *str_b);

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] != to_find[0])
		{
			i++;
			continue;
		}
		if (ft_strstr_compare(str + i, to_find))
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

int		ft_strstr_compare(char *str_a, char *str_b)
{
	int i;

	i = 0;
	while (str_a[i] != '\0' && str_b[i] != '\0' && str_a[i] == str_b[i])
	{
		i++;
	}
	if (str_b[i] == '\0')
	{
		return (1);
	}
	return (0);
}
