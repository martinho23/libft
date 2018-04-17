/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 15:27:08 by jfarinha          #+#    #+#             */
/*   Updated: 2018/04/17 15:30:05 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnstr(const char *str, size_t n)
{
	size_t	len;

	len = ft_strlen(str);
	n = (n < len) ? n : len;
	write(STDOUT, str, n);
	return (n);
}
