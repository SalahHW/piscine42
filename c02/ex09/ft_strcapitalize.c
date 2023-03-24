/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:26:35 by sbouheni          #+#    #+#             */
/*   Updated: 2022/07/24 19:28:17 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_upcaseletter(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_lowcaseletter(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_alphanum(char c)
{
	if (is_num(c) || is_upcaseletter(c) || is_lowcaseletter(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_upcaseletter(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	if (is_alphanum(str[0]) && is_lowcaseletter(str[0]))
	{
		str[0] -= 32;
	}	
	while (str[i])
	{
		if (!is_alphanum(str[i]) && is_lowcaseletter(str[i +1]))
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
