/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:59:48 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/17 16:35:14 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)str;
	while (n--)
	{
		if (*ptr_s == (unsigned char)c)
			return ((void *)ptr_s);
		ptr_s++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	*str = "Une S de caracteres !";
	char	*ret = NULL;
	char	*res = NULL;

	ret = ft_memchr(str, 'd', 12);
	res = memchr(str, 'd', 12);
	printf("ret = %s\n", ret);
	printf("ret = %s\n", res);

}
*/