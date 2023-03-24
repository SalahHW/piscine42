/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:32:39 by sbouheni          #+#    #+#             */
/*   Updated: 2022/07/25 18:04:25 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_i;
	unsigned int	src_i;

	dest_i = 0;
	while (dest[dest_i])
	{
		dest_i++;
	}
	src_i = 0;
	while (src[src_i] && src_i < nb)
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
