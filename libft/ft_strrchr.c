/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:23:29 by smarco            #+#    #+#             */
/*   Updated: 2022/10/12 14:09:12 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_cpy;
	char	*ptr;

	ptr = NULL;
	s_cpy = (char *)s;
	while (*(s_cpy))
	{
		if (*s_cpy == (char)c)
			ptr = s_cpy;
		s_cpy++;
	}
	if (*s_cpy == (char)c)
		return (s_cpy);
	return (ptr);
}
/*
int main()
{
	const char str[] = "coucou.lezinccom";
	const char ch = '.';
	char *ret;

	ret = ft_strrchr(str, ch);
	printf("string after |%c| is - |%s| \n", ch, ret);
	return (0);
}*/
