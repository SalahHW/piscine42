/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:29:55 by sbouheni          #+#    #+#             */
/*   Updated: 2022/08/01 02:27:06 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			write(1, &*argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*swap;

	i = 1;
	while (i < argc)
	{
		if (i + 1 < argc)
		{		
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
				i = 0;
			}
		}
		i++;
	}
	ft_print_params(argc, argv);
}
