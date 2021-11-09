/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:20:13 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/09 21:55:04 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

static int	ft_counter(char *b, char c)
{
	int		i;
	int		counter;
	char	tmp[2];

	if (!*b)
		return (0);
	i = 0;
	counter = 0;
	while (b[i])
	{
		if (b[i] == c && !(b[i + 1] == c))
		{
			counter++;
		}
		i++;
	}
	return (counter + 1);
}

static int	ft_strs_len(char *s, char c, char **ptr)
{
	int		i;
	int		counter;
	int		j;

	i = 0;
	j = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break ;
		while (!(s[i] == c) && s[i])
		{
			counter++;
			i++;
		}
	counter = 0;
	}
	return(0);
}

char	**ft_split(char const *s, char c)
{
	char		**ptr;
	int			num_of_words;
	char		*trimd;
	char		tmp[2];

	tmp[0] = c;
	tmp[1] = 0;
	trimd = ft_strtrim(s, tmp);
	num_of_words = ft_counter(trimd, c) + 1;
	ptr = malloc(num_of_words * sizeof(char *));
	ft_strs_len(trimd, c, ptr);
	return(ptr);
}

int	main(void)
{	
	ft_split("   Anas salah dfsdf lpsdsvk  ", ' ');
}