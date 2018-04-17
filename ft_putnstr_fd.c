/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 15:20:01 by jfarinha          #+#    #+#             */
/*   Updated: 2018/04/17 15:25:24 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnstr_fd(const char *str, size_t n, int fd)
{
	size_t	len;

	len = ft_strlen(str);
	n = (n < len) ? n : len;
	write(fd, str, n);
	return (n);
}
