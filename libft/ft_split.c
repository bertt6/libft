/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamli <bsamli@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:28:54 by bsamli            #+#    #+#             */
/*   Updated: 2022/10/21 15:15:16 by bsamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ftcount(char const *s, char c)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		st;
	char	**str;

	i = 0;
	st = 0;
	if (!s)
		return (NULL);
	str = malloc((ftcount(s, c)) * sizeof(char *));
	if (!str)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			st = 0;
			while (*s && *s != c && ++st)
				++s;
			str[i++] = ft_substr(s - st, 0, st);
		}
		else
			++s;
	}
	str[i] = 0;
	return (str);
}
