#include <stdio.h>
#include "ft_range.c"

int	main(void)
{
	int i;
	int	min;
	int	max;

	min = 501;
	max = 500;
	i = 0;
	while (i < (max - min))
	{
		printf("%i\n", *(ft_range(min, max) + i));
		i++;
	}
}
