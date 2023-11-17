/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:17:02 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/17 15:32:27 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printnbr(int n)
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
	char	*res;
	int		printed;

	res = ft_uitoa(n);
	printed = (int)ft_strlen(res);
	ft_prints(res);
	free (res);
	return (printed);
}

int	ft_printhexlow(unsigned int n)
{
	char	*res;
	int		printed;

	res = ft_itoa_baseprintf(n, 0);
	ft_prints(res);
	printed = (int)ft_strlen(res);
	free (res);
	return (printed);
}

int	ft_printhexup(unsigned int n)
{
	char	*res;
	int		printed;

	res = ft_itoa_baseprintf(n, 1);
	ft_prints(res);
	printed = (int)ft_strlen(res);
	free (res);
	return (printed);
}

int	ft_printp(uintptr_t n)
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
		res = ft_itoa_base_uintptr_t(n);
		ft_prints(res);
		printed += (int)ft_strlen(res);
		free (res);
		return (printed);
	}
}
