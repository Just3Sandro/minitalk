/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:38:06 by smarco            #+#    #+#             */
/*   Updated: 2022/10/11 16:08:11 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		k;

	k = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(k + 1);
	if (!ptr || (s1 == 0 && s2 == 0))
		return (0);
	i = 0;
	k = 0;
	while (s1[i])
		ptr[k++] = s1[i++];
	i = 0;
	while (s2[i])
		ptr[k++] = s2[i++];
	ptr[k] = '\0';
	return (ptr);
}
/*
int main()
{
	char str[] = "coucou ";
	char str1[] = "Le zinc";
	ft_strjoin(str, str1);
	return (0);
}*/
