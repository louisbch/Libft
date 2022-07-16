/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:11:45 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/16 17:46:48 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		ptr_dest = (unsigned char *)dest;
		ptr_src = (unsigned char *)src;
		while (n--)
			ptr_dest[i] = ptr_src[i];
			i++;
	}
	else
	{
		ptr_dest = (unsigned char *)dest + (n - 1);
		ptr_src = (unsigned char *)src + (n - 1);
		while (n--)
			ptr_dest[i] = ptr_src[i];
			i--;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main() 
{
	char Like[10] = { "ILikeYou" };
	char Hate[10] = { "IHateYou" };
	char str[] = "12345678";

	printf("memmove before : %s\n", Like);
	ft_memmove(Like + 1, Hate + 1, 4);
	printf("memmove after : %s\n", Like);

	printf("memmove before : %s\n", str);
	ft_memmove(str+3, str +1, 3);
	printf("memmove after : %s\n", str);

	return 0;
}
*/