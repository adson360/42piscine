#include <stdio.h>
#include "ft_strlowcase.c"

int	main()
{
	char str[] = "!#$&' ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnpqrstuvwxyz";

	printf("%s", ft_strlowcase(str));
}
