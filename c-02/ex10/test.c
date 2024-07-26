#include <stdio.h>

char	*func(char *str)
{
	return(++str);
}

int main()
{
	char *pStr;
	char cadeia[10] = "cadeia";
	char *pCadeia = cadeia;
	printf("%p\n", pCadeia);

	pStr = func(pCadeia);
	printf("%p\n", pCadeia);
	printf("%p", pStr);
}