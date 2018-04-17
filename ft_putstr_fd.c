/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:19:58 by jfarinha          #+#    #+#             */
/*   Updated: 2018/04/17 08:43:58 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_fd(const char *str, int fd)
{
	int len;

	len = 0;
	if (str)
		len = ft_strlen(str);
	write(fd, str, len);
	return (len);
}
