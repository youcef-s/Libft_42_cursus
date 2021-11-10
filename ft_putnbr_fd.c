/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_td.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:47:23 by ylabtaim          #+#    #+#             */
/*   Updated: 2021/11/09 21:00:03 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int m, int fd)
{
	if (m == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (m < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-m, fd);
	}
	else if (m >= 10)
	{
		ft_putnbr_fd(m / 10 , fd);
		ft_putchar_fd(m % 10 + '0', fd);
	}
	else
		ft_putchar_fd(m + '0', fd);
}
