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
	size_t	sub_len;

	sub_len = len - start;
	sub = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (sub == 0)
		return (0);
	while (start < len && *s)
	{
		*sub = *(s + start);
		sub++;
		start++;
	}
	*sub = '\0';
	return (sub - sub_len);
}
