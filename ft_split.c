/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:20:13 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/08 20:32:52 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		len;
	int		count;
	int		*index;

	i = 0;
	count = ft_counter(s);
	ptr = malloc(count * sizeof(char));
	while (count)
	{
		len = ft_shihaja(s, c, &index);
		ptr[i] = malloc(len);
		count--;
	}

}