/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:41:44 by smarco            #+#    #+#             */
/*   Updated: 2022/10/18 20:14:28 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new; 
}
// last vas pointer sur new !!!
/*
int main()
{
	t_list  *lst;
	t_list  *list;

	lst = ft_lstnew("toto");
	lst = ft_lstnew("tata");
	list = ft_lstnew("tutu");
	ft_lstadd_back(&lst, list);
	return (0);
}*/
