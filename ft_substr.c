/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:42:14 by lbouchon          #+#    #+#             */
/*   Updated: 2022/07/22 14:17:58 by lbouchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{	
		if (i >= start && j < len)
		{
			dest[j] = s[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	const char 	s1 [] = "je suis jerome";
	printf("%s\n", ft_substr(s1, 3, 7));
	const char 	s2 [] = "je suis jerome";
	printf("%s\n", ft_substr(s2, 3, 12));
	const char 	s3 [] = "";
	printf("%s\n", ft_substr(s3, 3, 7));
	const char 	s4 [] = "je suis jerome";
	printf("%s\n", ft_substr(s4, 8, 3));
	const char 	s5 [] = "je suis jerome";
	printf("%s\n", ft_substr(s5, 0, 2));
	char * str = strdup("1");
	printf("%s\n", ft_substr(str, 42, 42000000));
	printf("%s\n", ft_substr("tripouille", 0, 42000));
}
*/