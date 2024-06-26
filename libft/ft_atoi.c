/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:09:37 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/17 16:13:21 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int atoi(const char *str)
{
	int i;
	int m;
	int ret;

	m = 1;
	i = 0;
	ret = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f'))
	i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	while (str[i] <= '9' && str[1]>= '0')
	{
		ret += (str[i] - '0');
		ret *= 10;
		i++;
	}
	 return (ret * m);
}*/

int	ft_atoi(const char *str)
{
	int	nega;
	int	numbar;

	nega = 0;
	numbar = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			nega++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		numbar *= 10;
		numbar = numbar + (*str - 48);
		str++;
	}
	if (nega % 2 != 0)
		numbar *= -1;
	return (numbar);
}
