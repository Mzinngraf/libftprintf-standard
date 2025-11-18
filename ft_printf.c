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
		count += ft_printhex(va_arg(args, void *));
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

#include <stdio.h>
#include <limits.h>

int	ft_printf(const char *fmt, ...);

void	simple_test(const char *format, ...)
{
	int	ft_count, std_count;
	va_list	args1, args2;
	
	printf("\nFormat: \"%s\"\n", format);
	
	va_start(args1, format);
	va_start(args2, format);
	
	printf("ft_printf: ");
	ft_count = ft_printf(format, args1);
	printf(" [returned: %d]\n", ft_count);
	
	printf("printf:    ");
	std_count = printf(format, args2);
	printf(" [returned: %d]\n", std_count);
	
	if (ft_count == std_count)
		printf("✅ MATCH\n");
	else
		printf("❌ MISMATCH: ft=%d, std=%d\n", ft_count, std_count);
	
	va_end(args1);
	va_end(args2);
}

int	main(void)
{
	printf("=== FT_PRINTF TESTER ===\n");
	
	simple_test("Hello World");
	simple_test("Char: %c", 'A');
	simple_test("String: %s", "test");
	simple_test("Number: %d", 42);
	simple_test("Negative: %i", -42);
	simple_test("Percent: %%");
	simple_test("Multiple: %c %s %d %i", 'X', "hello", 123, -456);
	simple_test("MAX: %d", INT_MAX);
	simple_test("MIN: %d", INT_MIN);
	simple_test("Null: %s", NULL);
	simple_test("%c%s%d%i%%", 'A', "test", 99, -99);
	
	return (0);
}