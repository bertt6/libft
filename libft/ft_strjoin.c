/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamli <bsamli@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:28:59 by bsamli            #+#    #+#             */
/*   Updated: 2022/10/22 13:23:01 by bsamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1)
	{
		d = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!d)
			return (NULL);
		while (s1[i] != '\0')
		{
			d[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			d[i++] = s2[j];
			j++;
		}
		d[i] = '\0';
		return (d);
	}
	return (0);
}
