/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:11:45 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/12 15:51:24 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char		*ptr_dest;
	const char	*ptr_src;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (const char *)src;
	while (dest && src)
	{
		while ( n > 0 && i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
		i++;
	}
	return (dest);
}

/*
#include <string.h>

int main (void)
{
   char src[] = "Je suis Louis";
   char	dest[] = "Je ne sais pas";
 
	printf ("%s\n", dest);
	ft_memmove (src, dest, 4);
	printf ("%s\n", dest);
	memmove(src, dest, 4);
	printf("%s\n", dest);
}
*/
