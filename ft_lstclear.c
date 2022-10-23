/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamli <bsamli@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:14:19 by bsamli            #+#    #+#             */
/*   Updated: 2022/10/21 14:23:40 by bsamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*flag;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		flag = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = flag;
	}
	free(*lst);
}
