/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:54:15 by sbouheni          #+#    #+#             */
/*   Updated: 2022/07/13 21:19:28 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	actual_letter;

	actual_letter = 'z';
	while (actual_letter >= 'a')
	{
		write(1, &actual_letter, 1);
		actual_letter--;
	}
}
