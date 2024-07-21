#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	main()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	printf("%d", ft_str_is_lowercase(str));
}