/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <mavrin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:46:16 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/04 14:10:47 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
void	check_gate_reset_any(char c, int *direction, int *once);
void	check_gate_reset_digit(char c, int *direction, int *once);

char	*ft_strcapitalize(char *str)
{
	int i;
	int direction;
	int once;

	i = 0;
	direction = -1;
	once = 1;
	while (str[i] != '\0')
	{
		check_gate_reset_any(str[i], &direction, &once);
		check_gate_reset_digit(str[i], &direction, &once);
		if (str[i] > 80 - 16 * direction && str[i] < 107 - 16 * direction)
		{
			str[i] = str[i] + 32 * direction;
			if (once)
			{
				direction = direction * -1;
				once = 0;
			}
		}
		i++;
	}
	return (str);
}

void	check_gate_reset_any(char c, int *direction, int *once)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
	{
		*direction = -1;
		*once = 1;
	}
}

void	check_gate_reset_digit(char c, int *direction, int *once)
{
	if (c > '0' - 1 && c < '9' + 1)
	{
		*direction = 1;
		*once = 0;
	}
}
