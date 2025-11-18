#include "libftprintf.h"
int    ft_printhex(void *ptr)
{
    if(!ptr)
    {
        ft_putstr(NULL);
        return 0;
    }
    ft_putstr("0x");
    ft_puthex((unsigned long) ptr);
    return 0;
}
/* int main()
{
    ft_printhex((void*)255);
} */