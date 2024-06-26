/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:21:14 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/17 15:24:23 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	k;

	j = 0;
	if (!*little || (NULL == big && !len))
		return ((char *)big);
	while (*(big + j) && j < len)
	{
		k = 0;
		while (*(big + j + k) == *(little + k) && (k + j) < len)
		{
			if (0 == *(little + k + 1))
				return ((char *)big + j);
			++k;
		}
		++j;
	}
	return (NULL);
}
/*int main (void)
{
	char yyr[] = "asdfasf45y";	
	char yyr2[] = "s";

	printf("%s", ft_strnstr(yyr, yyr2, 19));
}*/