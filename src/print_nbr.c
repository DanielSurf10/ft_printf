/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:57:07 by danbarbo          #+#    #+#             */
/*   Updated: 2023/11/13 16:39:35 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		count = print_str("-2147483648");
		return (count);
	}
	if (nbr < 0)
	{
		count += print_char('-');
		nbr = -nbr;
	}
	if (nbr < 10)
		count += print_char(nbr + '0');
	else
	{
		count += print(nbr / 10);
		count += print(nbr % 10);
	}
	return (count);
}

int	print_nbr(int nbr, char flag)
{
	int	count;

	count = 0;
	if (flag != '%' && nbr > 0)
		count += print_char(flag);
	count += print(nbr);
	return (count);
}
