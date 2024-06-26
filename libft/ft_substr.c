/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:25:21 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/26 18:04:00 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"	

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	char	*sub;

	x = ft_strlen(s);
	if (start >= x)
		return (ft_strdup(""));
	x -= start;
	if (x > len)
		x = len;
	sub = malloc((x + 1) * (sizeof(char)));
	if (NULL == sub)
		return (NULL);
	x = 0;
	while (s[start] && len--)
		sub[x++] = s[start++];
	sub[x] = '\0';
	return (sub);
}

/*int  main (void)
{
	printf("%s", ft_substr("0123456789", 3, 5));
}*/
