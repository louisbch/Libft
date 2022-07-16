/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:59:28 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/16 17:50:28 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == 0)
			return (NULL);
		str++;
	}
	return ((char *)str);
}

/*
int main()
{
	char str[] = "Je sais tout";
	printf("%s\n", ft_strchr(str, 'a'));
}
*/