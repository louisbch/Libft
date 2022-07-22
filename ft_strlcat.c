/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:09:17 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/22 14:50:07 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	destsize;

	i = 0;
	destsize = 0;
	while (dest[destsize] && destsize < n)
		destsize++;
	while (src[i] && destsize + i + 1 < n)
	{
		dest[destsize + i] = src[i];
		i++;
	}
	if (destsize != n)
		dest[destsize + i] = '\0';
	return (ft_strlen(src) + destsize);
}
