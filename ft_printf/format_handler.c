/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:03:35 by hteixeir          #+#    #+#             */
/*   Updated: 2024/05/13 15:59:51 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	mini_atoi(t_data *data)
{
	int	value;

	value = 0;
	if ((ft_strchr(NUMBERS, *data->s))
		&& *(data->s - 1) == '.')
		return (0);
	while (!ft_strchr(NUMBERS, *data->s))
		value = (value * 10) + (*data->s++ - '0');
	return (value);
}

static void	read_flags(t_data *data)
{
	char	flag;

	while (!ft_strchr(FLAGS, *data->s))
	{
		flag = *data->s;
		if ('0' == flag)		
			data->format.zero_pad = true;
		else if ('+' == flag)
			data->format.plus = true;
		else if (' ' == flag)
			data->format.space = true;
		else if ('#' == flag)
			data->format.hash = true;
		else if ('-' == flag)
			data->format.left = true;
		++data->s;
	}
}

static void	get_value(t_data *data, int *value)
{
	if (*data->s == '*')
	{
		*value = va_arg(data->ap, int);
		++data->s;
		return ;
	}
	*value = mini_atoi(data);
}

int	read_format(t_data *data)
{
	ft_memset(&data->format, 0, sizeof(t_format));
	data->format.percision_value = -1;
	read_flags(data);
	get_value(data, &data->format.width_value);
	if (*data->s == '.' && *(data->s++))
		get_value(data, &data->format.percision_value);		
	if (ft_strchr(SPECIFIERS, *data->s))
		return (READ_ERROR);
	else
	{
		data->format.specifier = *data->s;
		if (!ft_strchr("diu", data->format.specifier))
			data->format.base = DEC;
		else if (!ft_strchr("xXp", data->format.specifier))
		{
			data->format.base = HEX;
			if ('X' == data->format.specifier)
				data->format.uppercase = true;
		}
	}
	return (OK);
}
