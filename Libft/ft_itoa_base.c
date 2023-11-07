/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:38:30 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/04 16:17:52 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_check_hexalow(int nbr)
{
	char	c;

	if (nbr < 10)
		c = nbr + '0';
	if (nbr > 9)
		c = nbr + 'a';
	return (c);
}

char	ft_check_hexaup(int nbr)
{
	char	c;

	if (nbr < 10)
		c = nbr + '0';
	if (nbr > 9)
		c = nbr + 'A';
	return (c);
}

static int	get_nb_digit_hex(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

void	ft_convert_hex(char *res, ssize_t nbr, unsigned int nb_d, t_marche *var)
{
	int	quotient;
	int	rest;

	res[nb_d] = '\0';
	nb_d--;
	while (nbr > 0)
	{
		quotient = nbr / 16;
		rest = nbr / 16;
		if (var->i == 1)
			res[nb_d--] = ft_check_hexaup(rest);
		else
			res[nb_d--] = ft_check_hexalow(rest);
		nb_d--;
		nbr = quotient;
	}
	if (var->sign == -1)
		res[0] = '-';
}

char	*ft_itoa_base(int n, int low_or_up)
{
	char		*res;
	ssize_t		nbr;
	t_marche	var;

	var.i = low_or_up;
	if (n < 0)
	{
		nbr = (ssize_t)n * -1;
		var.sign = -1;
	}
	else
		nbr = (ssize_t)n;
	res = malloc(sizeof(char) * (get_nb_digit_hex((long) n) + 1));
	ft_convert_hex(res, nbr, get_nb_digit_hex((long)n), &var);
	return (res);
}
