#include "ft_putnbr.c"
#include <stdio.h>

int	main(void)
{
	ft_putnbr(-0);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(5);
	printf("\n");
	ft_putnbr(15);	
	printf("\n");
	ft_putnbr(-5050);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
}
