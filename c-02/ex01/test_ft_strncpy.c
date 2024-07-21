#include <string.h>
#include <stdio.h>
#include "ft_strncpy.c"

int	main(void)
{
	char			src[] = "ParanapiAcaba";
	char			dest[] = "Londres";
	unsigned int	n = 5;
	
	////↓ Este bloco mostra o comportamento da função original

	// printf("Antes da 'strcpy' as palavras são:\n");
	// printf("%s\n", dest);
	// printf("%s\n", src);	
	// printf("A função 'strncpy' roda e o seu retorno é: %s\n", strncpy(dest, src, n));
	// printf("%s\n", dest);
	// printf("%s\n", src);


	////↓ Este bloco mostra o comportamento da função criada

	printf("Antes da 'ft_strncpy' as palavras são:\n");
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("A função 'ft_strncpy' roda e o seu retorno é: %s\n", ft_strncpy(dest, src, n));
	printf("%s\n", dest);
	printf("%s\n", src);
}