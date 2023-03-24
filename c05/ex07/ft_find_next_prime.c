/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:27:45 by sbouheni          #+#    #+#             */
/*   Updated: 2022/08/02 01:35:41 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		while (i <= nb / 2 && i < 46341)
		{
			if (nb % i == 0)
				return (0);
			i += 1;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
