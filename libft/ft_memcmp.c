/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:51:51 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/16 17:11:08 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)str1;
	s = (char *)str2;
	if (n == 0)
		return (0);
	while (*d++ == *s++ && --n)
		;
	return ((unsigned char)*--d - (unsigned char)*--s);
}

/*int main() {	
    char src[] = "t\200";
    char dst[] = "t\0";
    //char original_dst[20] = "gagagefwf";

    // Test ft_strlcpy  
    printf("ft_memcmp: %i\n", ft_memcmp(dst, src, 2));
    //printf("ft_strlcpy: %s\n", dst)	;
		//ft_print_result(ft_memcmp("t\200", "t\0", 2));
    return 0;
}*/