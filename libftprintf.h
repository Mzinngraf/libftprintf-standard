#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H

# include <ctype.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>



int	    ft_puthex(unsigned long n);
int	    ft_putnbr(int n);
int	    ft_putstr(char *s);
int	    ft_putchar(char c);
int     ft_isdigit(int i);
int     ft_printptr(void *ptr);
int	    ft_puthexupper(unsigned long n);
int     ft_strlen(char *str);


#endif