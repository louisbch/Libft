/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:48:02 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/19 13:16:17 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <string.h>
int	main()
{
	char	src[] = "Je vais bien";
	char	dest[100];
	
	ft_strlcpy(dest, src, 8);
	printf("%s\n", dest);
	strlcpy(dest, src, 8);
	printf("%s\n", dest);
	ft_strlcpy(dest, src, 0);
	printf("%s\n", dest);
	strlcpy(dest, src, 0);
	printf("%s\n", dest);
	ft_strlcpy(dest, src, 15);
	printf("%s\n", dest);
	strlcpy(dest, src, 15);
	printf("%s\n", dest);
}
*/