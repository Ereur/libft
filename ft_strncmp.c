/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:55:39 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/18 22:31:27 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	cmp_char(unsigned char c1, unsigned char c2)
{
	if (c1 != c2)
		return (c1 - c2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (c1[i] && c2[i] && i < n)
	{
		if (cmp_char(c1[i], c2[i]))
			return (c1[i] - c2[i]);
		i++;
	}
	if (i < n)
		return (cmp_char(c1[i], c2[i]));
	return (0);
}

/*int	main(void)
{
    char	*s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	char	*s2 = "\x12\x02";
	size_t	size = 6;

	int		i1 = strncmp(s1, s2, size);
	int		i2 = ft_strncmp(s1, s2, size);
    printf("org fun : %d", i1);
    printf("our fun : %d", i2);
    
}
*/