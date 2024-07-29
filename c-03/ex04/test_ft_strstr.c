#include <string.h>
#include <stdio.h>
#include "ft_strstr.c"

// needle	-->	agulha
// haystack	-->	palheiro

int	main()
{
	char	hs[] = "";
	char	nd[] = "de";

	printf("%s\n", strstr(hs, nd));
	printf("%s\n", ft_strstr(hs, nd));
}
