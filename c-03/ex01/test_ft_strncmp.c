#include <string.h>
#include <stdio.h>
#include "ft_strncmp.c"

int	main()
{
	char			str1[]="Essa eh um string";
	char			str2[]="Essa eh ";
	unsigned int	n = 10;

	printf("%d\n", strncmp(str1, str2, n));
	printf("%d\n", ft_strncmp(str1, str2, n));
}
