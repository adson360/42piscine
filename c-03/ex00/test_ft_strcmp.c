#include <string.h>
#include <stdio.h>
#include "ft_strcmp.c"

int	main()
{
	char	str1[]="";
	char	str2[]="";

	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str1, str2));
}