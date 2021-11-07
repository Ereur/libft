/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:54:21 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/07 14:08:42 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check if dest > src to handle overlap;
	//-->copy from last of src;
// else copy from the end of source; 
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
/*int main(void)
{
	char st[50] = "peanutzwin";
	printf("%s\n",ft_memmove(st+2,st,2));
	printf("%s\n", memmove(st+2,st,2));
 
}*/