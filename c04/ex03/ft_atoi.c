/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:53:57 by sbouheni          #+#    #+#             */
/*   Updated: 2022/07/27 18:58:03 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	is_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	number;
	int	sign;

	sign = 1;
	number = 0;
	while (is_space(*str))
	{
		str++;
	}
	while (is_sign(*str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (is_num(*str))
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * sign);
}
