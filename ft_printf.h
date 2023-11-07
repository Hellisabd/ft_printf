/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:44:33 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/07 11:57:20 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "Libft/libft.h"

int 	ft_printf(const char *str, ...);
int 	ft_printnbr(int n);
int 	ft_prints(const char *s);
int	    ft_printhexlow(int n);
int	    ft_printhexup(int n);
int     ft_printchar(int c);
int	    ft_printunbr(unsigned int n);

#endif
