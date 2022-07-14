/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:09:17 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/12 15:06:40 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (n == 0)
		return (srclen);
	if (n < destlen)
		return (n + srclen);
	while (dest[j])
	{
		j++;
	}
	while (src[i] && j + i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destlen + srclen);
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