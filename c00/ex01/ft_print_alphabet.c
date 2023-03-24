/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:20:23 by sbouheni          #+#    #+#             */
/*   Updated: 2022/07/19 19:47:32 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	actualletter;

	actualletter = 'a';
	while (actualletter <= 'z')
	{
		write(1, &actualletter, 1);
		actualletter++;
	}
}
