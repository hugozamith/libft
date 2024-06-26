/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:48:07 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/26 16:46:52 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (char )c)
		str++;
	if (*str == (char )c || !c)
		return ((char *) str);
	return (NULL);
}

/*int main (void)
{
	char yyr[] = "34346323grtb23v528fy989mghw79s,z8130cfx0e,j8qflwf9";

	printf("%s", strchr(yyr, '8'));
}*/