/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:25:21 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/27 16:05:53 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1h;
	char	*seth;
	char	*ret;
	size_t	first;
	size_t	last;

	s1h = (char *)s1;
	seth = (char *)set;
	if (NULL == s1 || NULL == set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
	first = 0;
	last = ft_strlen(s1) - 1;
	while (ft_strchr(seth, s1h[first]) && s1h[first])
		first++;
	while (ft_strchr(seth, s1h[last]) && last > first)
		last--;
	if (first > last)
		return (ft_strdup(""));
	ret = malloc(((last - first) + 2));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1h + first, last - first + 2);
	return (ret);
}

/*char	*ft_strchr(const char *str, int c)
{
	if (!(c))
	{
		while (*str++)
			;
		return ((char *)str);
	}
	while (*str != c && *str)
	{
		str++;
	}
	if (*str)
		return ((char *)str);
	return (NULL);
}
*/
/*int main(void)
{
    // Test cases
    const char s1[] = "   Hello, world!   ";
    const char set[] = " ";

    // Call ft_strtrim with the test case
    char *trimmed_str = ft_strtrim(s1, set);

    // Check if ft_strtrim returned NULL
    if (trimmed_str == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Return error code
    }

    // Print the original string and the trimmed string
    printf("Original string: \"%s\"\n", s1);
    printf("Trimmed string: \"%s\"\n", trimmed_str);

    // Free the memory allocated by ft_strtrim
    free(trimmed_str);

    return 0; // Return success code
}*/