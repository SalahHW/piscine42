#include <stdio.h>
#include <string.h>
#include "ft_strlcat.c"

int main(void)
{
	char	str1[50] = "tacos";
	char	str2[] = "test";
	char	str3[50] ="tacos
		";
	char	str4[] = "test";

	printf("%u\n", ft_strlcat(str1, str2, 5));
	printf("%lu\n", strlcat(str3, str4, 5));
}

