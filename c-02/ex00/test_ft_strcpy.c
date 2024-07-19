#include <stdio.h>
#include <string.h>
#include "ft_strcpy.c"

int	main(void)
{
	char	src[14] = "ParanapiAcaba";
	char	dest[8] = "Londres";
	
	//↓ Este bloco mostra o comportamento da função original

	// printf("Antes da 'strcpy' as palavras são:\n");
	// printf("%s\n", dest);
	// printf("%s\n", src);
	// strcpy(dest, src);	
	// printf("Depois da 'strcpy' as palavras são:\n");
	// printf("%s\n", dest);
	// printf("%s\n", src);

	// printf("\n"); // linha vazia

	//↓ Este bloco mostra o comportamento da função criada

	printf("Antes da 'ft_strcpy' as palavras são:\n");
	printf("%s\n", dest);
	printf("%s\n", src);
	ft_strcpy(dest, src);	
	printf("Depois da 'ft_strcpy' as palavras são:\n");
	printf("%s\n", dest);
	printf("%s\n", src);
}