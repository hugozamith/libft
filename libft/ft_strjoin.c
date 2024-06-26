/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:09:15 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/29 10:19:33 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ret;
	char	*a;

	a = (char *)s1;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ret = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ft_memcpy(ret, a, len_s1);
	ft_strlcpy(ret + len_s1, s2, len_s2 + 1);
	return (ret);
}
/*char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len_s1 = ft_strlen(s1);
    size_t len_s2 = ft_strlen(s2);
    
    char *ret = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
    if (ret == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }
    
    ft_memcpy(ret, s1, len_s1);

    ft_strlcat(ret, s2, len_s1 + len_s2 + 1);

    return ret;
}*/

/*int main(void)
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
    char *result = ft_strjoin(s1, s2);
    if (result != NULL) {
        printf("%s\n", result);
        free(result); // Free the mcdemory allocated by ft_strjoin
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
