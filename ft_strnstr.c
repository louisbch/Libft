/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:13:38 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/17 17:36:25 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char *)str);
	size = ft_strlen(to_find);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && size <= n)
		{
			j++;
			n--;
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (0);
}

/*
#include <string.h>

int main(void)
{
	char str[] = "Je vais bien";
	char to_find[] = "vais";
	printf("%s\n", ft_strnstr(str, to_find, 20));

	char	str1[] = "Je vais bien";
	char	to_find2[] = "vais";
	printf("%s\n", strnstr(str1, to_find2, 20));
}
*/