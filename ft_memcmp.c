/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:45:13 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/17 16:45:30 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
   size_t         i;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
   {
      if (ptr_s1[i] != ptr_s2[i])
         return (ptr_s1[i] - ptr_s2[i]);
      i++;
   }
   return (0);
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
