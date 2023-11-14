/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsig_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:21:56 by danbarbo          #+#    #+#             */
/*   Updated: 2023/11/13 16:38:48 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsig_nbr(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr < 10)
		count += print_nbr(nbr, '%');
	else
	{
		count += print_unsig_nbr(nbr / 10);
		count += print_unsig_nbr(nbr % 10);
	}
	return (count);
}
