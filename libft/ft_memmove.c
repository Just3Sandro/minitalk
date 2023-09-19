/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:19:56 by smarco            #+#    #+#             */
/*   Updated: 2022/10/09 15:00:19 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (s == 0 && d == 0)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else if (s > d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
//passe a la francinette mais ca fait pas la meme chose que le vrai 
/*
int main()
{
	char str1[] = "consectetur";
	char str2[] = "conseipsujde";
	puts("str1 befor memmove ");
	puts(str1);

	ft_memmove(str1, str2, sizeof(str2));
	puts("\nstr1 after : ");
	puts(str1);

	return (0);
}*/
