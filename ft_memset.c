/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:48:19 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/22 14:48:50 by lbouchon         ###   ########.fr       */
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
