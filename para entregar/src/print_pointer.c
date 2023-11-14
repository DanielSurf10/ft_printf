/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:29:25 by danbarbo          #+#    #+#             */
/*   Updated: 2023/11/13 20:41:47 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long nbr)
{
	int	counter;

	if (nbr == 0)
		counter = write(1, "(nil)", 5);
	else
		counter = print_hex_nbr(nbr, 0, 1);
	return (counter);
}
