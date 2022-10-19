/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamli <bsamli@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:28:59 by bsamli            #+#    #+#             */
/*   Updated: 2022/10/17 18:54:28 by bsamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	j = 0;
	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	ptr = (char *)malloc(i * sizeof(char));
	if ((!s1 || !s2) || !ptr)
		return (NULL);
	while (s1[j])
	{
		ptr[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	return (ptr);
}
