/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:52:33 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/16 17:31:07 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr_s;
	size_t			i;

	ptr_s = s;
	i = 0;
	while (i < n)
	{
		ptr_s[i] = '\0';
		i++;
	}
}

/*
#include <string.h>
int main()
{
	char str[20] = "Je suis super";
	ft_bzero(str, 1);
	printf("%s\n", str);
	char str2[20] = "Je suis super";
	bzero(str2, 1);
	printf("%s\n", str2);
}
*/
