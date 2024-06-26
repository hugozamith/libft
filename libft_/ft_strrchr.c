/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:25:21 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/26 16:55:25 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if ((char)c == *(str + len))
			return ((char *)(str + len));
		--len;
	}
	return (NULL);
}
/*int main (void)
{
	char yyr[] = "hugozamithhugo";

	printf("%s", strrchr(yyr, 'h'));
}*/