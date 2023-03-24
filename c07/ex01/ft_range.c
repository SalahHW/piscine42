/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:21:29 by sbouheni          #+#    #+#             */
/*   Updated: 2022/08/03 17:46:31 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = NULL;
	if (min >= max)
	{
		return (arr);
	}
	arr = malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
