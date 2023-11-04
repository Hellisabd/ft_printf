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

char	ft_check_hexa(int nbr)
{
	char	c;
	
	if (nbr < 10)
		c = nbr + '0';
	if (nbr > 10)
		c = nbr + 'a';
	return (c);
}

void	ft_convert_hexlow(char *res, ssize_t nbr, unsigned int nb_d, int sign)
{
	int	quotient;
	int	rest;

	res[nb_d] = '\0';
	nb_d--;
	while(nbr > 0)
	{
		quotient = nbr / 16;
		rest = nbr / 16;
		res[nb_digit--] = ft_check_hexa(rest);
		nb_d--;
		nbr = quotient;
	}
}

char	*ft_itoa_base_low_hexa(int n)
{
	char	*res;
	ssize_t	nbr;


	if (n < 0)
	{
		nbr = (ssize_t)n * -1;
		sign = -1;
	}
	else
		nbr = (ssize_t)n;
	res = malloc(sizeof(char) * (get_nb_digit((long) n) + 1));
	convert_nb_hex, (res, nbr, get_nb_digit((long)n, sign);
}
