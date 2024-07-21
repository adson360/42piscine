#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("%d", ft_str_is_uppercase(str));
}