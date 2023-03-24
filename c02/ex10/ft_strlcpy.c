/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 00:48:48 by sbouheni          #+#    #+#             */
/*   Updated: 2022/07/23 20:57:46 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (*dest && i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (dest);
}
