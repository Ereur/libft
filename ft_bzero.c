/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:47:12 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/18 21:04:05 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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

/*
int main(void)
{
	char str[] ="anas";
	char s1[] = "anas";

	ft_bzero(str + 2, 4);
	//bzero(s1 + 2, 3);
	printf("ourfun : %s\n", str);
	printf("orgfun : %s\n", s1);
}
*/