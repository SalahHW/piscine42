/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:29:01 by sbouheni          #+#    #+#             */
/*   Updated: 2022/07/18 22:07:49 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// print a single char on standard output
void	print_char(char c)
{
	write(1, &c, 1);
}

// convert a number of one or two digit and send it to print_char()
void	print_num(int number)
{
	char		d;
	char		u;

	if (number <= 9)
	{
		print_char('0');
		print_char(number + '0');
	}
	else
	{
		d = number / 10 + '0';
		u = number % 10 + '0';
		print_char(d);
		print_char(u);
	}
}

void	ft_print_comb2(void)
{
	int		left_number;
	int		right_number;

	left_number = 0;
	while (left_number <= 98)
	{
	right_number = left_number + 1;
		while (right_number <= 99)
		{
			print_num(left_number);
			print_char(' ');
			print_num(right_number);
			if ((left_number < 98 || right_number < 99))
			{
				print_char(',');
				print_char(' ');
			}
			right_number++;
		}
		left_number++;
	}
}
