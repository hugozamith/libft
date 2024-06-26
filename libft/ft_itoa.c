/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:25:58 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/27 16:16:34 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*if_zero(void)
{
	char	*ret;

	ret = malloc(2);
	if (NULL == ret)
		return (NULL);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

int	digit_counter(int n)
{
	int	x;

	x = 0;
	while (n != 0)
	{
		n /= 10;
		x++;
	}
	return (x);
}

char	*fill_string(char *ret, int x, long y)
{
	while (y)
	{
		ret[--x] = (y % 10) + 48;
		y /= 10;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		x;
	long	y;
	char	*ret;

	x = digit_counter(n);
	y = n;
	if (y == 0)
		return (if_zero());
	if (y < 0)
	{
		x++;
		ret = malloc((x + 1) * (sizeof(char)));
		if (NULL == ret)
			return (NULL);
		y *= -1;
		*ret = '-';
	}
	else
		ret = malloc((x + 1) * (sizeof(char)));
	if (NULL == ret)
		return (NULL);
	ret[x] = '\0';
	if (y == 0)
		return ((ret));
	return (fill_string(ret, x, y));
}

/*int main(void)
{
	printf("%s", ft_itoa(-243));
}*/