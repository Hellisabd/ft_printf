/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:43:48 by bgrosjea          #+#    #+#             */
/*   Updated: 2023/11/20 12:51:25 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_prints(char *s)
{
	int		i;

	i = 0;
	if (!s)
	{
		i = ft_prints("(null)");
		return (i);
	}
	while (s[i])
	{
		if (ft_printchar(s[i]) == -1)
			return (-1);
		i++;
	}
	return (i);
}
