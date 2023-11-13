/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:26:22 by danbarbo          #+#    #+#             */
/*   Updated: 2023/11/13 16:42:37 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int		ret;
	int		ret_p;

	ret = ft_printf("Numero: %+d\n",  120);
	ret_p = printf("Numero: %+d\n",  120);
	printf("%i %i\n", ret, ret_p);


	return (0);
}
