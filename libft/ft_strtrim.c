/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:09:19 by smarco            #+#    #+#             */
/*   Updated: 2022/10/12 12:26:44 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	size_t	i;
	char	*newstring;

	i = 0;
	j = ft_strlen(s1);
	while ((i != j) && ft_strchr(set, s1[i]))
		i++;
	while ((i != j) && ft_strrchr(set, s1[j - 1]))
			j--;
	newstring = (char *)malloc(j - i + 1);
	if (!newstring)
		return (0);
	*newstring = '\0';
	if (i < j)
		ft_strlcpy(newstring, (char *)s1 + i, j - i + 1);
	return (newstring);
}
/*
int main()
{
	char yo[] = "coucou";
	char t[] = "t";
	printf("%s\n", ft_strtrim(yo, t));
	return (0);
}*/
