/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:19:05 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/07 11:57:15 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
#include <ctype.h>
int main()
{
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", isalnum('4'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", ft_isalnum('@'));
	printf("%d\n", isalnum('@'));
}
*/