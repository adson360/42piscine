#include <string.h>
#include <stdio.h>
#include "ft_strstr.c"

// needle	-->	agulha
// haystack	-->	palheiro

int	main()
{
	char	hs[] = "";
	char	nd[] = "";

	printf("%s\n", strstr(hs, nd));
	printf("%s\n", ft_strstr(hs, nd));
}
/*
ffffffdfffffffdeffff
de
	*******
ffffffdfffffffdeffff

	*******


	*******

de
	*******
de
de
	*******
de
ffffffdfffffffdeffff
	*******
fffffffde
de
	*******
fffffffde
f 
*/