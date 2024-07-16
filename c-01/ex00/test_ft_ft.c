#include "ft_ft.c"
#include <unistd.h>

int	main()
{
	int integer;

	integer = 62;
	write(1, &integer, 1);
	ft_ft(&integer);
	write(1, &integer, 1);
}