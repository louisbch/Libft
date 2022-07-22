/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:48:19 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/20 15:18:02 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	int				i;

	ptr_s = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		ptr_s[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "";
	char str2[] = "Salut pote!";

	 memset(str, 'a', 5);
	ft_memset(str2, 'a', 5);


	printf("%s\n", str);
	printf("%s\n", str2);

	return (0);
}
*/