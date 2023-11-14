/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:09:11 by danbarbo          #+#    #+#             */
/*   Updated: 2023/11/14 17:43:57 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	manag_simple_conversion(const char *str, int i, va_list *args)
{
	int	count;

	count = 0;
	if (str[i] == '%')
		count += print_char('%');
	else if (str[i] == 'c')
		count += print_char(va_arg(*args, int));
	else if (str[i] == 's')
		count += print_str(va_arg(*args, char *));
	else if (str[i] == 'u')
		count += print_unsig_nbr(va_arg(*args, unsigned int));
	else if (str[i] == 'p')
		count += print_pointer(va_arg(*args, unsigned long));
	return (count);
}

static int	manag_percent(const char *str, int *i, va_list *args)
{
	int	count;

	count = 0;
	if (str[*i] == '%' || str[*i] == 'c' || str[*i] == 's' || str[*i] == 'u'
		|| str[*i] == 'p')
		count += manag_simple_conversion(str, *i, args);
	else if (str[*i] == 'd' || str[*i] == 'i' || str[*i] == ' '
		|| str[*i] == '+')
	{
		if (str[*i] == ' ' || str[*i] == '+')
			*i += 1;
		count += print_nbr(va_arg(*args, int), str[*i - 1]);
	}
	else if (str[*i] == '#' || str[*i] == 'x' || str[*i] == 'X')
	{
		if (str[*i] == '#')
			*i += 1;
		if (str[*i] == 'x')
			count += print_hex_nbr(va_arg(*args, unsigned int), 0,
					str[*i - 1] == '#');
		else if (str[*i] == 'X')
			count += print_hex_nbr(va_arg(*args, unsigned int), 1,
					str[*i - 1] == '#');
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += manag_percent(str, &i, &args);
		}
		else
			count += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
