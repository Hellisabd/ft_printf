/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:17:02 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/11 15:06:54 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printnbr(int	n)
{
	int		printed;
	char	*res;
	res = ft_itoa(n);
	ft_prints(res);
	printed = (int)ft_strlen(res);
	free (res);
	return (printed);
}

int	ft_printunbr(unsigned int n)
{
	char    *res;
    res = ft_uitoa(n);
    ft_prints(res);
	    return((int)ft_strlen(res));
}

int	ft_printhexlow(int n)
{
	char	*res;

	res = ft_itoa_base(n, 0);
	ft_prints(res);
	return ((int)ft_strlen(res));
}

int	ft_printhexup(int n)
{
	char *res;

	res = ft_itoa_base(n, 1);
	ft_prints(res);
	return ((int)ft_strlen(res));
}

int	ft_printp(unsigned long n)
{
	char	*res;
	int		printed;

	write (1, "0x", 2);
	printed = 2;
	if (n == 0)
	{
		printed = 3;
		write(1, "0", 1);
		return (printed);
	}
	else
	{
		res = ft_itoa_base_uintptr_t(n, 0);
		ft_prints(res);
		return (printed + (int)ft_strlen(res));
	}
	return(printed);
}