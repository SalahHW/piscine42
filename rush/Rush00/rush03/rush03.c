/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:32:18 by sbouheni          #+#    #+#             */
/*   Updated: 2022/07/17 16:39:04 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	firstline(int column, int x)
{
	char	letter;

	if (column == 1)
	{
		letter = 'A';
	}
	else if (column == x)
	{
		letter = 'C';
	}
	else
	{
		letter = 'B';
	}	
	return (letter);
}

char	lastline(int column, int x)
{
	char	letter;

	if (column == 1)
	{
		letter = 'A';
	}
	else if (column == x)
	{
		letter = 'C';
	}
	else
	{
		letter = 'B';
	}
	return (letter);
}

char	otherlines(int column, int x)
{
	char	letter;

	if (column == 1 || column == x)
	{
		letter = 'B';
	}
	else
	{
		letter = ' ';
	}
	return (letter);
}

void	print_square(x, y, line, column)
{
	while (line <= y)
	{
		while (column <= x)
		{
			if (line == 1)
			{
				ft_putchar(firstline (column, x));
			}
			else if (line == y)
			{
				ft_putchar(lastline (column, x));
			}
			else
			{
				ft_putchar(otherlines (column, x));
			}
			column++;
		}
		ft_putchar('\n');
		line++;
		column = 1;
	}
}

void print_error(void)
{
	write(1, "Bien tenté\n", 11);
}

void	rush(int x, int y)
{
	int	line;
	int	column;
	int adrMax;
	int adrMin;

	line = 1;
	column = 1;
	adrMax = 2147483647;

	if(x <= 0 || y <= 0 || x > adrMax || y > adrMax)
	{
		print_error();
	}
	else
	{
		print_square(x, y, line, column);
	}
}
