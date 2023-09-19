/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:09:07 by smarco            #+#    #+#             */
/*   Updated: 2022/10/18 22:10:25 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list *tmp;

	while (*lst)
	{
		tmp = *lst->next
		del(lst->content);
    	free(lst);
		*lst = tmp;
	}
}
