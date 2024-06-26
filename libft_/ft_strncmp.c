/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:34:30 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/26 17:05:34 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (num == 0)
		return (0);
	while (*str1 == *str2 && --num && *str1)
	{
		++str1;
		++str2;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

/*int main() {
    char src[] = "Hellbo, world!";
    char dst[] = "Hellao, world!";
    //char original_dst[20] = "gagagefwf";

    // Test ft_strlcpy  
    printf("ft_strncmp: %i\n", ft_strncmp(dst, src, 0));
    //printf("ft_strlcpy: %s\n", dst);

    return 0;
}	*/
