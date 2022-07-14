/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:32:13 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/14 16:51:26 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n < 0)
	{
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*result;

	len = get_len(n);
	if (! result)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (n < 0)
	{
		result[0] = '-';
	}
	while (len)
	{
		if (n < 0)
		{
			result[len] = '0' + n % 10 * (-1);
			n = n / 10;
 		}
		else
		{
			result[len] = '0' + n % 10;
			n = n / 10;
		}
		len--;
	}
	return (result);
}

#include <stdio.h>

int main ()
{
	printf("%s\n", ft_itoa(456300));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-52488415));
	printf("%s\n", ft_itoa(230));
	
}