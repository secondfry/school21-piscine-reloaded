/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <mavrin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:54:06 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/04 15:23:07 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int q;

	i = 0;
	q = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[q] != '\0' && i + q < size)
	{
		dest[i + q] = src[q];
		q++;
	}
	if (i + q < size)
	{
		dest[i + q] = '\0';
	}
	return (i + q);
}
