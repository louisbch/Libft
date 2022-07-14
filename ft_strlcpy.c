/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:48:02 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/07 11:54:15 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (size && (i < (size - 1)))
		{
			dest[i] = src[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (dest);
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
