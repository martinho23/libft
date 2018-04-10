/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 13:26:44 by jfarinha          #+#    #+#             */
/*   Updated: 2018/03/29 17:12:20 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	process(int nbr, int step, char *array)
{
	int	size = 0;

	size = (step > size) ? step : size;
	nbr = (nbr < 0)	? (nbr *-1) : nbr;
	if (nbr > 9) {
		size = process((nbr / 10), (step + 1), array);
	}
	array[size - step] = (nbr % 10) + '0';
	return (size);
}

char		*ft_itoa(int nbr)
{
	char	array[11];
	int		size;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	size = process(nbr, 0, array);
	array[size + 1] = '\0';
	return (nbr < 0) ? (ft_strjoin("-", array)) : (ft_strdup(array));
}