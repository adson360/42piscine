#include <string.h>
#include <stdio.h>
#include "ft_strcat.c"

int	main()
{
	char	dest0[]="";
	char	src0[]="L";
	printf("%s\n", strcat(dest0, src0));

	char	dest1[]="";
	char	src1[]="L";
	printf("%s\n", ft_strcat(dest1, src1));
}
