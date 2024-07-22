#include <stdio.h>
#include "ft_strcapitalize.c"

int	main()
{
	char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s", ft_strcapitalize(str));
	printf("\nOi, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um"); //como é para ser
}
