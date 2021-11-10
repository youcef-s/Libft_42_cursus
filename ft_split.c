/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:48:04 by ylabtaim          #+#    #+#             */
/*   Updated: 2021/11/10 17:40:25 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	unsigned int	i;
	int				n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

static char	*ft_allocate(const char *s, size_t n)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * (n + 1));
	if (!copy)
		return (0);
	ft_strlcpy(copy, s, (n + 1));
	return (copy);
}

static void	ft_free(char **str, int k)
{
	if (!str)
	{
		while (k)
			free(str[k]);
		free (str);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splited_strs;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (0);
	splited_strs = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!splited_strs)
		return (0);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			splited_strs[k++] = ft_allocate(s + j, i - j);
		ft_free(splited_strs, k);
	}
	splited_strs[k] = 0;
	return (splited_strs);
}
