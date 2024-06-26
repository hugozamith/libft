/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:34:36 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/17 16:25:13 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
		return (ch + 32);
	return (ch);
}

/*int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, ft_tolower(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_tolower(c));

    c = '9';
    printf("\n%c -> %c", c, ft_tolower(c));
    return 0;	
}	*/