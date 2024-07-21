#include <stdio.h>
#include "ft_str_is_alpha.c"

int	main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnpqrstuvwxyz";

	printf("%d", ft_str_is_alpha(str));
}