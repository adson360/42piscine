#include <stdio.h>
#include "ft_strcapitalize.c"

int	main()
{
	char str[] = "oi, tudo bem? 42pa|avras_quarenTA-e-duas; Cinquenta+e+um";

	printf("%s", ft_strcapitalize(str));
	printf("\nOi, Tudo Bem? 42pa|Avras_Quarenta-E-Duas; Cinquenta+E+Um"); //como é para ser
}
