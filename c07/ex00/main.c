#include <stdio.h>
#include <string.h>
#include "ft_strdup.c"

int	main(void)
{
	char	str[] = "Noe le Bourgeois";

	printf("%s\n",strdup(str));
	printf("%s\n",ft_strdup(str));
}
