/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:05:07 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/02 16:11:25 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

int		ft_strlen(char* str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = *src;
	return (dst);
}

char	*ft_strdup(char *src)
{
	
	char	*ret;

	ret = (char*) malloc(sizeof(char) * (ft_strlen(src) + 1));
	ft_strcpy(ret, src);
	return (ret);
}
