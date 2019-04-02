/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <mavrin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:54:06 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/04 15:05:43 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int q;

	i = 0;
	q = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[q] != '\0')
	{
		dest[i + q] = src[q];
		q++;
	}
	dest[i + q] = '\0';
	return (dest);
}
