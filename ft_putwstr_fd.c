/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 10:45:59 by jfarinha          #+#    #+#             */
/*   Updated: 2018/04/17 10:58:22 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putwstr_fd(const int *str, int fd)
{
	size_t	len;

	len = 0;
	while(str && *str)
		len += ft_putchar_fd(*str++, fd);
	return (len);
}
