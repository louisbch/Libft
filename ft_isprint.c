/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:36:53 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/07 11:59:00 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <ctype.h>
int main()
{
	printf("%d\n", ft_isprint(','));
	printf("%d\n", isprint(','));
	printf("%d\n", ft_isprint('5'));
	printf("%d\n", isprint('5'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", isprint('a'));
	printf("%d\n", ft_isprint('NULL'));
	printf("%d\n", isprint('NULL'));
}
*/
