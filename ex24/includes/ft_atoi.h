/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:51:54 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/14 17:51:57 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_H
# define FT_ATOI_H

int		ft_is_space(char c);
int		ft_is_sign(char c);
int		ft_is_digit(char c);
int		ft_atoi(char *str);

#endif
