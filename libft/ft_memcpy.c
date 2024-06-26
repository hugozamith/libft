/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:07:42 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/17 10:46:58 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;

	i = 0;
	if (NULL == src && NULL == dst)
		return (NULL);
	while (n--)
		*((unsigned char *)dst + i++) = *(unsigned char *)src++;
	return (dst);
}
