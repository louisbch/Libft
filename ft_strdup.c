/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:52:36 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/16 17:51:23 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*dest;

	dest = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
int main()
{
	char *str;
	str = "Hello world";
	printf("%s%p\n", str, str);
	printf("%s%p\n", ft_strdup(str), ft_strdup(str));
	printf("%s%p\n", strdup(str), strdup(str));	
}
*/