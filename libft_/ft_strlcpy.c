/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:31:22 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/16 18:14:49 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (NULL == dst || NULL == src || !n)
		return (src_len);
	while (*src && --n)
		*dst++ = *src++;
	*dst = '\0';
	return (src_len);
}

/*int main() {
    char src[] = "Hello, world!";
    char dst[20] = "gagagefwf";
    char original_dst[20] = "gagagefwf";

    // Test ft_strlcpy  
    printf("\nft_strlcpy: %lu\n", ft_strlcpy(dst, src, 0));
    printf("ft_strlcpy: %s\n", dst);

    return 0;
}*/
