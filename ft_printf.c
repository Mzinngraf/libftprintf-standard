/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourao- <mmourao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:41:07 by mmourao-          #+#    #+#             */
/*   Updated: 2025/11/17 13:29:16 by mmourao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	handle_format(char spec, va_list args, int count)
{
	if (spec == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (spec == 'd' || spec == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (spec == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (spec == '%')
		count += ft_putchar('%');
	else if (spec == 'p')
		count += ft_printptr(va_arg(args, void *));
    else if (spec == 'x')
		count += ft_puthex(va_arg(args, unsigned int));
	else if (spec == 'X')
		count += ft_puthexupper(va_arg(args, unsigned int));
    return (count);
}

int	ft_printf_aux(const char *fmt, va_list args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i + 1])
		{
			count = handle_format(fmt[i + 1], args, count);
			i++;
		}
		else
			count += ft_putchar(fmt[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		count;

	va_start(args, fmt);
	count = ft_printf_aux(fmt, args);
	va_end(args);
	return (count);
}

int	main(void)
{
	int	a, b;

	a = ft_printf("Hello World");
	b = printf("Hello World");
	printf("\n%d %d\n", a, b);

	a = ft_printf("Char: %c", 'A');
	b = printf("Char: %c", 'A');
	printf("\n%d %d\n", a, b);

	a = ft_printf("String: %s", "teste");
	b = printf("String: %s", "teste");
	printf("\n%d %d\n", a, b);

	a = ft_printf("Numero: %d", 42);
	b = printf("Numero: %d", 42);
	printf("\n%d %d\n", a, b);

	a = ft_printf("Hex: %x", 255);
	b = printf("Hex: %x", 255);
	printf("\n%d %d\n", a, b);

	a = ft_printf("Hex: %X", 255);
	b = printf("Hex: %X", 255);
	printf("\n%d %d\n", a, b);	

	return (0);
} 