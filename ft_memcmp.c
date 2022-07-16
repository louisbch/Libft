/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:45:13 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/16 17:42:56 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;

	ptr_s1 = (const unsigned char *)s1;
	ptr_s2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n && *ptr_s1 && (*ptr_s1 == *ptr_s2))
	{
		s1++;
		s2++;
		n--;
	}
	return (*ptr_s1 - *ptr_s2);
}

/*
#include <string.h>
int main ()
{
   char str1[15] = "LOUPS";
   char str2[15] = "loups";
   int	res;
   int	ret;

   res = memcmp(str1, str2, 5);
   printf("%d\n", res);
   ret = ft_memcmp(str1, str2, 5);
   printf("%d\n", ret);
   res = memcmp(str1, str2, 0);
   printf("%d\n", res);
   ret = ft_memcmp(str1, str2, 0);
   printf("%d\n", ret);
   res = memcmp(str1, str2, 15);
   printf("%d\n", res);
   ret = ft_memcmp(str1, str2, 15);
   printf("%d\n", ret);
}
*/
