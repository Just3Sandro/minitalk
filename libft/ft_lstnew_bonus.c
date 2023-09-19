/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:01:58 by smarco            #+#    #+#             */
/*   Updated: 2022/10/15 13:24:44 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list);
	if (!list)
		return (NULL);
	list->content = content; //1er content = celui de libft et le 2em celui en parametre
	list->next = NULL;
	return (list);
}
//https://www.youtube.com/watch?v=t_9Zz58PzxY