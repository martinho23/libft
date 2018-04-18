/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:19:58 by jfarinha          #+#    #+#             */
/*   Updated: 2018/04/18 07:38:25 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_fd(const char *str, int fd)
{
	int len;

	if (fd < 0 && str)
		return (-1);
	len = 0;
	if (str)
		len = ft_strlen(str);
	write(fd, str, len);
	return (len);
}
