/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:17:02 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/04 17:22:40 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printnbr(int	n)
{
	char	*res;
	res = ft_itoa(n);
	ft_prints(res);
	return((int)ft_strlen(res));
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
	char *res;

	res = ft_itoa_base(n, 0);
	ft_prints(res);
	return ((int)ft_strlen(res));
}