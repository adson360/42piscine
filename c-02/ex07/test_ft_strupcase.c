#include <stdio.h>
#include "ft_strupcase.c"

int	main()
{
	char str[] = "!#$&' ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnpqrstuvwxyz";

	printf("%s", ft_strupcase(str));
}
