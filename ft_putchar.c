/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourao- <mmourao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:35:59 by mmourao-          #+#    #+#             */
/*   Updated: 2025/11/17 13:44:28 by mmourao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int	ft_putchar(char c)
{
	int count;
	count = 0;
	write(1, &c, 1);
	count ++;
	return count;
}
/* int main ()
{
	ft_putchar('a');
} */