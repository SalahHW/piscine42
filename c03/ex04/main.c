#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int	main(void)
{
	char	str1[] = "42 est une dinguerie";
	char	str2[] = "une djfohsiougsfogsofgsofg";

	printf("%s\n", ft_strstr(str1, str2));
	printf("%s", strstr(str1, str2));
}

