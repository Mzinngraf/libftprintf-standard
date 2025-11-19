/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourao- <mmourao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:41:07 by mmourao-          #+#    #+#             */
/*   Updated: 2025/11/17 13:29:16 by mmourao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
int ft_printptr(void *ptr)
{
    int count;

    count = 0;
    if (ptr == NULL)
    {
        count += ft_putstr("(nil)");
        return (count);
    }
    count += ft_putstr("0x");
    count += ft_puthex((unsigned long)ptr);
    return (count);
}
/* int main()
{
    ft_printhex((void*)255);
} */