/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:59:48 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/22 14:48:19 by lbouchon         ###   ########.fr       */
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
