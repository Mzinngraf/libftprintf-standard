/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourao- <mmourao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:41:07 by mmourao-          #+#    #+#             */
/*   Updated: 2025/11/17 13:29:16 by mmourao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned long n)
{
	char *hex = "0123456789abcdef";
	int count;
	count = 0;

	if (n >= 16)
		count += ft_puthex(n / 16);
	count += ft_putchar(hex[n % 16]);
	return count;
}
/*  int main()
{
    ft_puthex(255);
}
 */