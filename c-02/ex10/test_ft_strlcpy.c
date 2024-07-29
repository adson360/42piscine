// #include "ft_strlcpy.c"
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	unsigned int	size = 5;
	char			dest0[] = "ca";
	char			src0[] = "de_caracteressssssssssssssssss";
	// char			dest1[] = "ca";
	// char			src1[] = "de_caracteressssssssssssssssss";

	printf("%zu\n", strlcpy(dest0, src0, size));
	printf("%s\n", dest0);

	// printf("%d\n", ft_strlcpy(dest1, src1, size));
	// printf("%s\n", src1);
}