/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_nbr_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:23:14 by danbarbo          #+#    #+#             */
/*   Updated: 2023/11/14 14:55:53 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	print_hex(unsigned long nbr, int is_upper)
{
	int		count;
	char	*hex_lib;

	count = 0;
	if (is_upper)
		hex_lib = "0123456789ABCDEF";
	else
		hex_lib = "0123456789abcdef";
	if (nbr >= 16)
	{
		count += print_hex(nbr / 16, is_upper);
		count += print_hex(nbr % 16, is_upper);
	}
	else
		count += print_char(hex_lib[nbr]);
	return (count);
}

int	print_hex_nbr(unsigned long nbr, int is_upper, int has_hashtag)
{
	int	count;

	count = 0;
	if (has_hashtag && nbr != 0)
	{
		if (is_upper)
			print_str("0X");
		else
			print_str("0x");
		count += 2;
	}
	count += print_hex(nbr, is_upper);
	return (count);
}
