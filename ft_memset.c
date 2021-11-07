/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:31:15 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/03 10:20:40 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*ptr;
	size_t				i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
		ptr[i++] = c;
	return (b);
}

/*int	main(void)
{
	int	arr[] = {1,2,3,4,5,6};
	//int str[] = 0;
	ft_memset(arr, 23, 6 * sizeof(int));
	//memset(str, '.', 1 * sizeof(char));
	int i = 0;
	while(i <= 5)
	{
		printf("%d\n",arr[i++]);
	}
}*/
