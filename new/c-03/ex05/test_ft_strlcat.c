#include <stdio.h>
#include "ft_strlcat.c"

int main()
{
	unsigned int	size = 2;
	char 			a[] = "abc";
	char 			b[] = "def";

	printf("after function total characters are: %d", strlcat(a, b, size));
	printf("--> %s", a);
}