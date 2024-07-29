#include <string.h>
#include <stdio.h>
#include "ft_strncmp.c"

int	main()
{
	char			str1[]="apple";
	char			str2[]="lima";
	unsigned int	n = 2;

	printf("%d\n", strncmp(str1, str2, n));
	printf("%d\n", ft_strncmp(str1, str2, n));
}
