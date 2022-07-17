/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:52:33 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/17 14:01:22 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr_s;
	size_t	i;

	ptr_s = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr_s[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[20] = "Je suis super";
	ft_bzero(str + 4, 1);
	printf("%s\n", str);
	char str2[20] = "Je suis super";
	bzero(str2 + 4, 1);
	printf("%s\n", str2);
}
*/