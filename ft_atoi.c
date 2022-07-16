/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:38:00 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/16 17:28:48 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		if (res * sign > 2147483647)
			return (-1);
		if (res * sign < -2147483648)
		i++;
	}
	return (res * sign);
}
/*
#include <stdlib.h>

int main()
{
	char str[] = "-123985abcd";
	char str2[] = "abcde-12354";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", atoi(str2));
}
*/