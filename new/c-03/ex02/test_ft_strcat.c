#include <string.h>
#include <stdio.h>
#include "ft_strcat.c"

int	main()
{
	char	dest0[] = "caracteres";
	char	src0[] = "cadeia";
	char	dest1[] = "caracteres";
	char	src1[] = "cadeia";
	
	printf("%s\n", strcat(dest0, src0));
	printf("%s\n", ft_strcat(dest1, src1));
}