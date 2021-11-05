/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:47:12 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/03 14:52:13 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	if (n == 0)
	{
		return ;
	}
	ft_memset(ptr, '\0', n);
}

int main(void)
{
	char str[] ="anas";
	char s1[] = "anas";

	ft_bzero(str + 2, 0);
//	bzero(s1 + 2, 3);
	printf("ourfun : %s\n", str);
	printf("orgfun : %s\n", s1);
}
