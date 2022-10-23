/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamli <bsamli@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:28:00 by bsamli            #+#    #+#             */
/*   Updated: 2022/10/17 19:05:46 by bsamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	mem;

	mem = count * size;
	ptr = malloc(mem);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, mem);
	return (ptr);
}
