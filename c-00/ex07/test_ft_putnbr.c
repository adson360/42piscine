#include "ft_putnbr.c"
#include <unistd.h>

int main()
{
    write(1, "Maximum int value:", 18);
    ft_putnbr(2147483647); //maximum int value
    write(1, "\nMinumun int value:", 19);
    ft_putnbr(-2147483648); //minimum int value
    write(1, "\nSmall values:", 14);
    ft_putnbr(-1); //minimum int value
    write(1, "\nSmall values:", 14);
    ft_putnbr(2); //minimum int value
    write(1, "\nSmall values:", 14);
    ft_putnbr(0); //minimum int value
    write(1, "\nThe answer:", 12);
    ft_putnbr(42); //minimum int value
}