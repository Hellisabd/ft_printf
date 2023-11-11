/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_baseprintf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:38:30 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/11 15:14:25 by bgrosjea         ###   ########.fr       */
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

static void	ft_convert_hex(char *res, unsigned n, unsigned int nb_d, t_marche *var)
{
	int	quotient;
	int	rest;

	res[nb_d] = '\0';
	nb_d--;
	if (nbr == 0)
		res[nb_d] = '0';
	while (nbr > 0)
	{
		quotient = nbr / 16;
		rest = nbr % 16;
		if (var->i == 1)
			res[nb_d] = ft_check_hexaup(rest);
		else
			res[nb_d] = ft_check_hexalow(rest);
		nb_d--;
		nbr = quotient;
	}
	if (var->sign == -1)
		res[0] = '-';
}

char	*ft_itoa_baseprintf(unsigned int n, int low_or_up)
{
	char		*res;
	t_marche	var;

	var.i = low_or_up;
	res = malloc(sizeof(char) * (get_nb_digit_hex((long) n, &var) + 1));
	ft_convert_hex(res, n, get_nb_digit_hex((long)n, &var), &var);
	return (res);
}