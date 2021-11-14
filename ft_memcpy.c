/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:19:53 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/14 21:17:54 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!d && !s)
		return (NULL);
	while (len--)
		*d++ = *s++;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	//char str[50] = "Anas";
	//char dest[50];
	//ft_memcpy(dest, str, 4);
	char *src;
	//printf("%s",ft_memcpy(NULL, "HOUSSAM", 3));
	printf("%s", ft_memcpy("", "", 3));
	//printf("myfun : %s", dest);
}
*/