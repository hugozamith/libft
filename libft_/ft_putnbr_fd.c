/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:23:45 by hteixeir          #+#    #+#             */
/*   Updated: 2024/04/26 10:51:19 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	reverse(char *nbr, int n, int fd)
{
	while (n >= 1)
		ft_putchar_fd(nbr[--n], fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	x;
	char	nbr[10];

	x = n;
	if (x == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (x < 0)
	{
		x *= -1;
		ft_putchar_fd('-', fd);
	}
	n = 0;
	while (x)
	{
		nbr[n++] = (x % 10) + '0';
		x /= 10;
	}
	reverse(nbr, n, fd);
}

/*void	ft_putnbr(int nb)
{
	long	nbl;
	char	c[10];
	short	i;

	nbl = nb;
	i = 0;
	if (nb == 0)
	{
		write (1, "0", 1);
		return ;
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write (1, "-", 1);
	}
	while (nbl)
	{
		c[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i >= 1)
		write (1, &c[--i], 1);
}
*/