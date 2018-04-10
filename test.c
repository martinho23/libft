/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:34:24 by jfarinha          #+#    #+#             */
/*   Updated: 2018/03/29 19:25:10 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		main(int argc, char **argv)
{
	int		i;
	char	*nbr;

	i = 1;
	while (i < argc)
	{
		nbr = ft_itoa(atoi(argv[i]));
		printf("|%s|\n", nbr);
		i++;
	}
	return (0);
}
