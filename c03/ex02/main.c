#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int main(void)
{
	char	str1[50] = "Hello";
	char	str2[] = "World";
	char	str3[50] = "Hello";
	char	str4[] = "World";

	printf("%s", ft_strcat(str1, str2));
	printf("%s", strcat(str3, str4));
}

