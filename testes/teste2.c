/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:26:22 by danbarbo          #+#    #+#             */
/*   Updated: 2023/11/14 17:43:28 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main()
{
	int		ret;
	int		ret_p;

	ret = ft_printf(NULL);
	ret_p = printf(NULL);
	printf("%i %i\n", ret, ret_p);


	return (0);
}
