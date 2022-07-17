/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:00:30 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/16 18:04:11 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check(charc, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strim

/*
#include <stdio.h>
int main()
{
    printf("%s\n", ft_strtrim("abqbc", "abc"));
    printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
    printf("%s\n", ft_strtrim("aqrdac", "abc"));
    printf("%s\n", ft_strtrim("aqraadabc", "abc"));
}
*/