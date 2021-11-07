/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:19:53 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/07 14:03:59 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	
	if (!dest && !src)
		return(NULL);
	d = dest;
	s = src;
	while (len--)
		*d++ = *s++;
	return (dest);
}

/*int	main(void)
{
	//char str[50] = "Anas";
	//char dest[50];
	//ft_memcpy(dest, str, 4);
	char src[50] = "anas";
	printf("%s",ft_memcpy(NULL, NULL, 3));
	//printf("%s",memcpy(NULL, src, 3));
	//printf("myfun : %s", dest);
}*/