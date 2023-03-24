/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:32:39 by sbouheni          #+#    #+#             */
/*   Updated: 2022/07/26 19:43:03 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				dest_i;
	unsigned int	src_i;
	int				src_length;

	src_length = ft_strlen(src) + ft_strlen(dest);
	dest_i = 0;
	while (dest[dest_i])
	{
		dest_i++;
	}
	src_i = 0;
	while (src[src_i] && src_i < size)
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (src_length);
}
