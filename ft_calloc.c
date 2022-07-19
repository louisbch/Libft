/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:36:15 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/19 18:29:03 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = (void *)malloc(count * size * sizeof(void));
	if (!res)
		return (NULL);
	if (size == 0)
		size = 1;
	ft_bzero(res, count * size);
	return (res);
}

/*
#include <stdio.h>

int main ()
{
	printf(" |%s| %p\n",ft_calloc(12,10),ft_calloc(12,10));
	printf(" |%s| %p\n",ft_calloc(20,10),ft_calloc(20,10));
	printf(" |%s| %p\n",ft_calloc(12,8),ft_calloc(12,8));
	printf(" |%s| %p\n",ft_calloc(0,0),ft_calloc(0,0));
}
*/