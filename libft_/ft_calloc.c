/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:45:28 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/17 17:16:39 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, nitems * size);
	}
	return (ptr);
}
