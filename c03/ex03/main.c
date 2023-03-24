#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

int main(void)
{
	char	str1[50] = "Hello";
	char	str2[] = "world";
	char	str3[50] = "Hello";
	char	str4[] = "world";

	printf("%s\n", ft_strncat(str1, str2, 10));
	printf("%s\n", strncat(str3, str4, 10));
}

