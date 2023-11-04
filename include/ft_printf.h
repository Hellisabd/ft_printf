/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:44:33 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/04 16:52:22 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str);
int	ft_printnbr(int n);
int	ft_printunb(int n);
int	ft_printhexlow(int n);
int	ft_prints(const char *s);

#endif
