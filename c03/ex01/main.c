#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int	main(void)
{
	char str1[] = "Salade";
	char str2[] = "Saladw";

	printf("%i", ft_strncmp( str1, str2, 6));
}

