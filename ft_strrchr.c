/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:31:18 by ylabtaim          #+#    #+#             */
/*   Updated: 2021/11/03 09:54:45 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*t;

	t = (char *)s;
	i = 0;
	while (t[i])
		i++;
	while (t[i] != c && i > 0)
		i--;
	if (t[i] == c)
		return (&t[i]);
	else
		return (0);
}
