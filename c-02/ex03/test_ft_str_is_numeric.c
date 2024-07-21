#include <stdio.h>
#include "ft_str_is_numeric.c"

int	main()
{
	char str[] = "0123456789";

	printf("%d", ft_str_is_numeric(str));
}