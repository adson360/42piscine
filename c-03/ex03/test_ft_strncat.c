#include <string.h>
#include <stdio.h>
#include "ft_strncat.c"

int	main()
{
	unsigned int	nb = 5;

	char dest0[] = "Essa eh uma string";
	char src0[] = "OUTRA_STRING_AKI";
	printf("%s\n", strncat(dest0, src0, nb));

	char dest1[] = "Essa eh uma string";
	char src1[] = "OUTRA_STRING_AKI";
	printf("%s\n", ft_strncat(dest1, src1, nb));

	// char *pDest0 = "Essa eh uma string";
	// char *pSrc0 = "OUTRA_STRING_AKI";
	// printf("%s\n", strncat(pDest0, pSrc0, nb));

	// char *pDest1 = "BatatasFritas";
	// char *pSrc1 = "maionese";
	// printf("%s\n", strncat(pDest1, pSrc1, nb));

	// char	dest0[]="Linha";
	// char	src0[]="torta";
	// printf("%s\n", strncat(dest0, src0, nb));

	// char	dest1[]="Linha";
	// char	src1[]="torta";
	// printf("%d\n", nb);
	// printf("%s\n", strncat(dest1, src1, nb));

	// char	dest3[]="Linha";
	// char	src3[]="torta";
	// printf("%d\n", nb);
	// printf("%s\n", strncat(dest3, src3, nb));

	// char	dest1[]="Linha";
	// char	src1[]="torta";
	// printf("%s\n", ft_strncat(dest1, src1, nb));
}