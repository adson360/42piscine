#include <string.h>
#include <stdio.h>
#include "ft_strncat.c"

int	main()
{
	unsigned int	nb = 2;
	char			dest0[] = "caracteres";
	char			src0[] = "cadeia";
	char			dest1[] = "caracteres";
	char			src1[] = "cadeia";
	
	// printf("%s\n", strncat(dest0, src0, nb));
	printf("%s\n", ft_strncat(dest1, src1, nb));
}