/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:34:26 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/04 15:18:51 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return(1);
}

int	ft_format(const char format, va_list args)
{
	int	printed;

	printed = 0;
	if (format == 'c')
		printed += ft_printchar(va_arg(args, int)); 
	else if (format == 's')
		printed += ft_prints(va_arg(args, char *));
	else if (format == 'p')
		printed += *ft_itoa_base_ulong(va_arg(args, size_t));
	else if (format == 'd')
		printed += ft_printnbr(va_arg(args, int));
	else if (format == 'i')
		printed += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		printed += ft_printunbr(va_arg(args, unsigned int));
	else if (format == 'x')
		printed += ft_printhexlow(va_arg(args, int));
	else if (format == 'X')
		printed += ft_printhexup(va_arg(args, int));
	else if (format == '%')
		printed += ft_printchar('%');
	return(printed);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	args;
	int		printed;

	i = 0;
	printed = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printed += ft_format(str[i + 1], args);
			i++;

		}
		else
		{
			ft_printchar(str[i]);
			printed++;
		}
		i++;
	}
	va_end(args);
	return (printed);
}