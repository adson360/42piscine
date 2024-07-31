#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>
#include "ft_strlcat.c"

int main()
{
	unsigned int	size = 10;
	char 			dst0[15] = "abcdef";
	char 			src0[15] = "xyz";
	char 			dst1[15] = "abcdef";
	char 			src1[15] = "xyz";

	printf("strlcat\n");
	printf("\tsize  : %u\n", size);
	printf("\treturn: %zu\n", strlcat(dst0, src0, size));
	printf("\tdest  : %s\n", dst0);

	printf("ft_strlcat\n");
	printf("\tsize  : %u\n", size);
	printf("\treturn: %u\n", ft_strlcat(dst1, src1, size));
	printf("\tdest  : %s\n", dst1);
}