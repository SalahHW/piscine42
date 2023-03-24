#include <stdio.h>
#include "ft_strjoin.c"

int	main(void)
{
	char	*tab[4];

   	tab[0] = "Salah";
	tab[1] = "Ryad";
    tab[2] = "Richard";
	tab[3] = "Joachim";
	printf("%s\n",ft_strjoin(4, tab, ", "));
}
