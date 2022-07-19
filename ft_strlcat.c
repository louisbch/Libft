/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:09:17 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/19 13:15:53 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	destsize;

	i = 0;
	destsize = 0;
	while (dest[destsize] && destsize < n)
		destsize++;
	while (src[i] && destsize + i + 1 < n)
	{
		dest[destsize + i] = src[i];
		i++;
	}
	if (destsize != n)
		dest[destsize + i] = '\0';
	return (ft_strlen(src) + destsize);
}

/*
#include <string.h>
int main()
{
	char	dest[10] = "Lol";
	char	src[] = "lily";
	printf("%zu\n", ft_strlcat(dest, src, 2));
	printf("%s\n", dest);

	char	dest1[10] = "Lol";
	char	src1[] = "lily";
	printf("%zu\n", strlcat(dest1, src1, 2));
	printf("%s\n", dest1);

	char	dest2[10] = "Lol";
	char	src2[] = "lily";
	printf("%zu\n", ft_strlcat(dest2, src2, 0));
	printf("%s\n", dest2);

	char	dest3[10] = "Lol";
	char	src3[] = "lily";
	printf("%zu\n", strlcat(dest3, src3, 0));
	printf("%s\n", dest3);

	char	dest4[15] = "Lol";
	char	src4[] = "lily";
	printf("%zu\n", ft_strlcat(dest4, src4, 12));
	printf("%s\n", dest4);

	char	dest5[15] = "Lol";
	char	src5[] = "lily";
	printf("%zu\n", strlcat(dest5, src5, 12));
	printf("%s\n", dest5);
}
*/