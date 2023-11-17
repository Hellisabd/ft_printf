/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_baseprintf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:38:30 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/17 17:13:25 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	ft_check_hexalow(unsigned int n)
{
	char	c;

	if (n < 10)
		c = n + '0';
	if (n > 9)
		c = n + 'a' - 10;
	return (c);
}

static char	ft_check_hexaup(unsigned int n)
{
	char	c;

	if (n < 10)
		c = n + '0';
	if (n > 9)
		c = n + 'A' - 10;
	return (c);
}

static int	get_nb_digit_hex(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static void	ft_conv_hex(char *res, unsigned int n, unsigned int nd, t_m *var)
{
	int	quotient;
	int	rest;

	res[nd] = '\0';
	nd--;
	if (n == 0)
		res[nd] = '0';
	while (n > 0)
	{
		quotient = n / 16;
		rest = n % 16;
		if (var->i == 1)
			res[nd] = ft_check_hexaup(rest);
		else
			res[nd] = ft_check_hexalow(rest);
		nd--;
		n = quotient;
	}
}

char	*ft_itoa_baseprintf(unsigned int n, int low_or_up)
{
	char	*res;
	t_m		var;

	var.i = low_or_up;
	res = malloc(sizeof(char) * (get_nb_digit_hex(n) + 1));
	if (!res)
		return (NULL);
	ft_conv_hex(res, n, get_nb_digit_hex(n), &var);
	return (res);
}
