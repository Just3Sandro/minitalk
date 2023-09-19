/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:31:17 by smarco            #+#    #+#             */
/*   Updated: 2022/10/11 15:36:54 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(len +1);
	if (!s || !ptr)
		return (0);
	j = 0;
	i = start;
	while (len != 0)
	{
		ptr[j++] = s[i++];
		len--;
	}
		ptr[j] = '\0';
	return (ptr);
}
/*
 *pour return somithing empty
int main()
{
    char string[] = "coucoules";
    ft_substr(string, 'e', 93);
    return (0);
}*/
