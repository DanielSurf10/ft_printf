/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:09:11 by danbarbo          #+#    #+#             */
/*   Updated: 2023/11/10 19:21:32 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				count += print_char('%');
			else if (str[i] == 'c')
				count += print_char(va_arg(args, int));
			else if (str[i] == 's')
				count += print_str(va_arg(args, char *));
			else if (str[i] == 'd' || str[i] == 'i')
				count += print_nbr(va_arg(args, int));
			else if (str[i] == 'u')
				count += print_unsig_nbr(va_arg(args, unsigned int));
		}
		else
			count += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
