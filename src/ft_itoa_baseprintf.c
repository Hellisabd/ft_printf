/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_baseprintf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:38:30 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/16 15:38:40 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_check_hexalow(unsigned int n)
{
	char	c;

	if (nbr < 10)
		c = nbr + '0';
	if (nbr > 9)
		c = nbr + 'a' - 10;
	return (c);
}

static char	ft_check_hexaup(unsigned int n)
{
	char	c;

	if (nbr < 10)
		c = nbr + '0';
	if (nbr > 9)
		c = nbr + 'A' - 10;
	return (c);
}

static int	get_nb_digit_hex(unsigned int n, t_marche *var)
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
	if (var->sign == -1)
		i++;
	return (i);
}

static void	ft_conv_hex(char *res, unsigned int n, unsigned int ndd, t_m *var)
{
	int	quotient;
	int	rest;

	res[nd] = '\0';
	nb_d--;
	if (nbr == 0)
		res[nd] = '0';
	while (nbr > 0)
	{
		quotient = nbr / 16;
		rest = nbr % 16;
		if (var->i == 1)
			res[nd] = ft_check_hexaup(rest);
		else
			res[nd] = ft_check_hexalow(rest);
		nd--;
		nbr = quotient;
	}
	if (var->sign == -1)
		res[0] = '-';
}

char	*ft_itoa_baseprintf(unsigned int n, int low_or_up)
{
	char	*res;
	t_m		var;

	var.i = low_or_up;
	res = malloc(sizeof(char) * (get_nb_digit_hex((long) n, &var) + 1));
	ft_conv_hex(res, n, get_nb_digit_hex((long)n, &var), &var);
	return (res);
}
