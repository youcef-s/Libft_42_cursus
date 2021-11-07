/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:23:13 by ylabtaim          #+#    #+#             */
/*   Updated: 2021/11/04 10:52:20 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	end;

	end = len + start;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		sub = (char *)malloc(sizeof(char));
		*sub = 0;
		return (sub);
	}
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == 0)
		return (0);
	ft_strlcpy(sub, (s + start), len + 1);
	return (sub);
}
