/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:32:07 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/07 11:58:07 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <ctype.h>
int main()
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", isascii('A'));
	printf("%d\n", ft_isascii('4'));
	printf("%d\n", isascii('4'));
}
*/