/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:15:54 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/16 16:37:21 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s = str;

	while (n-- > 0)
	{
		if (*s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

/*int main() {
    char src[] = "Hello, world!";

	char * stir = memchr(src, 'o', 0	);
    
    printf("memchr: %s\n", stir);

    return 0;
}*/