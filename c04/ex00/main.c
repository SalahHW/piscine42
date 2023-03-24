#include <stdio.h>
#include "ft_strlen.c"

int	main(void)
{
	char	str1[] = "Salah";
	char	str2[] = "Ryad";
	char	str3[] = "";

	printf("%i \n", ft_strlen(str1));
	printf("%i \n", ft_strlen(str2));
	printf("%i \n", ft_strlen(str3));
}

