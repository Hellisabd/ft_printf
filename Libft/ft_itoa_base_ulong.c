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

static char	fts_check_hexalow(int nbr)
{
	char	c;

	if (nbr < 10)
		c = nbr + '0';
	if (nbr > 10)
		c = nbr + 'a';
	return (c);
}

static void	fts_convert_hex(char *res, ssize_t nbr, unsigned int nb_d)
{
	int	quotient;
	int	rest;

	res[nb_d] = '\0';
	nb_d--;
	while(nbr > 0)
	{
		quotient = nbr / 16;
		rest = nbr / 16;
		res[nb_d--] = fts_check_hexalow(rest);
		nb_d--;
		nbr = quotient;
	}
}

char	*ft_itoa_base_ulong(size_t n)
{
	char	*res;

	res = malloc(sizeof(char) * (get_nb_digit((long) n) + 1));
	fts_convert_hex(res, get_nb_digit((long)n));
	return((int)ft_strlen(res));
}
