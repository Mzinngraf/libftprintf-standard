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

int	ft_putstr(char *s)
{
	int count;
	count = 0;
	if (s == NULL)
		return 0;
	while (*s)
	{
		write(1, s, 1);
		s++;
		count++;
	}
	return count;
}

