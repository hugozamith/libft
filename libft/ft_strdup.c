/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:51:55 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/26 17:11:30 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str;
	char	*ret;

	size = ft_strlen(s) + 1;
	str = malloc(size);
	if (NULL == str)
		return (NULL);
	ret = str;
	while (*s)
		*str++ = *s++;
	*str = '\0';
	return (ret);
}

/*int main (void)
{
	char strr[] = "bing chilling";

	printf ("%d", *ft_strdup(strr));
}*/