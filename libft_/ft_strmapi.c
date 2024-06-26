/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:59:58 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/26 17:21:53 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	int		y;
	char	*ret;

	y = 0;
	x = ft_strlen(s);
	ret = malloc((x + 1) * (sizeof(char)));
	if (NULL == ret)
		return (NULL);
	while (s[y])
	{
		ret[y] = f(y, s[y]);
		y++;
	}
	ret[x] = '\0';
	return (ret);
}

/*char increment_char(unsigned int index, char c) {
    // Just a simple example, printing the index
    printf("Index: %u\n", index);
    return c + 1;
}

int main() {
    const char *input_string = "Hello, world!";
    
    // Call ft_strmapi with the input string and the mapping function
    char *result = ft_strmapi(input_string, &increment_char);

    if (result != NULL) {
        printf("Original string: %s\n", input_string);
        printf("Mapped string: %s\n", result);
        
        // Don't forget to free the allocated memory
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/