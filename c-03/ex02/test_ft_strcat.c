#include <string.h>
#include <stdio.h>
#include "ft_strcat.c"

int	main()
{
	char	dest0[]="kk";
	char	src0[]="";
	printf("%s\n", strcat(dest0, src0));

	char	dest1[]="kk";
	char	src1[]="";
	printf("%s\n", ft_strcat(dest1, src1));
}
