#include "ft_rev_int_tab.c"
#include <stdio.h>

int	main()
{
	int tab[6] = {20, 22, 44, 36, 42, 77};
	printf("Os elementos da array antes são: \n");
	printf("[%d, %d, %d, %d, %d, %d] \n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	printf("\n");
	ft_rev_int_tab(tab, 6);
	printf("Os elementos da array depois são: \n");
	printf("[%d, %d, %d, %d, %d, %d] \n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}