/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:58:53 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/16 17:54:01 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>

void  f(unsigned int index, char *s)
{
    ft_putchar_fd(*s, 1);
    ft_putchar_fd('[', 1);
    ft_putnbr_fd(index, 1);
    ft_putchar_fd(']', 1);
}
int main(void)
{
    char    str1[] = "abcdefghijklmnopqrstuvwxyz";
    ft_striteri(str1, *f);
}
*/