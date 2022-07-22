/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:58:24 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/22 14:51:07 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	position;
	char	*str;

	i = 0;
	position = 0;
	str = (char *)s;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			position = i;
		i++;
	}
	if (position > 0 || (unsigned char)str[0] == (unsigned char)c)
		return (&str[position]);
	if (str[i] == 0 && c == 0)
		return (&str[i]);
	return (NULL);
}
