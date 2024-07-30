#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int main()
{
	char a[] = "abcdefghij";
	char b[] = "k";

	// printf("%s\n", strstr(a, b));
	printf("%s", ft_strstr(a, b));
}