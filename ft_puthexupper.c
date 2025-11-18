#include "libftprintf.h"
int	ft_puthexupper(unsigned long n)
{
	char *hex = "0123456789abcdef";

	if (n >= 16)
		ft_puthex(n / 16);
	ft_putchar(hex[n % 16] -32);
	return 0;
}
/*  int main()
{
    ft_puthex(255);
}
 */