/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:57:23 by sbouheni          #+#    #+#             */
/*   Updated: 2022/07/20 19:44:57 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = swap;
		i++;
	}
}
