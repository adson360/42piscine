#include <stdio.h>
#include "ft_str_is_printable.c"

int	main()
{
	char str[] = "!#$&' ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnpqrstuvwxyz";

	printf("%d", ft_str_is_printable(str));
}