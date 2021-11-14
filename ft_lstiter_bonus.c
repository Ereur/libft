/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:15:40 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/14 13:23:42 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{

	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*int main(void)
{

}*/