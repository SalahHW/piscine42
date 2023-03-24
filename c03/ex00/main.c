#include <stdio.h>
#include "ft_strcmp.c"
#include <string.h>
int	main(void)
{
	char	str1[] = "Sala";
	char	str2[] = "Sala";

	printf("%i \n", ft_strcmp(str1, str2));
	printf("%i", strcmp(str1, str2));
}
