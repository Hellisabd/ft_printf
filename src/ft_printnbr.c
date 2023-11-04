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

#include "ft_printf.h"

int	ft_printnbr(int	n)
{
	char	*res;
	res = ft_itoa(n);
	ft_prints(res);
	return(ft_strlen(res));
}

int	ft_printunb(unsigned int n)
{
	char    *res;
        res = ft_uitoa(n);
        ft_prints(res);
        return((int)ft_strlen(res));
}

int	ft_printhexlow(int n)
{
	char	*res;

	n = ft_atoi_base(n);
	res = ft_itoa_base(n);
}
