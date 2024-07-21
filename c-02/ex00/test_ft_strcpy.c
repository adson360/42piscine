#include <stdio.h>
#include <string.h>
#include "ft_strcpy.c"

int	main(void)
{
	char	src[14] = "ParanapiAcaba";
	char	dest[8] = "Londres";
	
	////↓ Este bloco mostra o comportamento da função original

	printf("Antes da 'strcpy' as palavras são:\n");
	printf("%s\n", dest);
	printf("%s\n", src);	
	printf("A função 'strcpy' roda e o seu retorno é: %s\n", strcpy(dest, src));
	printf("Depois da 'strcpy' as palavras são:\n");
	printf("%s\n", dest);
	printf("%s\n", src);


	////↓ Este bloco mostra o comportamento da função criada

	// printf("Antes da 'ft_strcpy' as palavras são:\n");
	// printf("%s\n", dest);
	// printf("%s\n", src);
	// printf("A função 'ft_strcpy' roda e o seu retorno é: %s\n", ft_strcpy(dest, src));
	// printf("%s\n", dest);
	// printf("%s\n", src);
}