/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:11:33 by danbarbo          #+#    #+#             */
/*   Updated: 2023/11/13 17:01:45 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);

int	print_char(char c);
int	print_str(char *str);
int	print_nbr(int nbr, char flag);
int	print_unsig_nbr(unsigned int nbr);
int	print_hex_nbr(unsigned long nbr, int is_upper, int has_hashtag);

#endif
