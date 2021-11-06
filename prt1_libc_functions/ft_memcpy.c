/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:19:53 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/06 10:43:09 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst)
		return (NULL);
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return ((char *)(dst));
}

/*int main(void)
{
	char str[50] = "Anas";
	char dest[50];

	//ft_memcpy(dest, str, 4);
	ft_memcpy(dest, str, 3);
	//printf("myfun : %s", dest);
	int i;

	i = 0;	
	while(i < 3 )
	{
		printf(" %c", dest[i++]);
	}
}*/