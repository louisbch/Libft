/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:58:24 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/11 18:03:03 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	while (*str)
	{
		str++;
	}
	while (*str != (char)c)
	{
		str--;
		if (*str == (char)c)
			return ((char *)str);
	}
	return (NULL);
}

int main()
{
	char str[] = "je suis samuel";
	printf("%s\n", ft_strrchr(str, 's'));

}
