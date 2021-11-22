/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:09:52 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/22 18:20:04 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*
void ft_del(void *content)
{
	free(content);
}

int main()
{
	t_list *ptr;
	ptr = ft_lstnew(ft_strdup("Anas"));
	ft_lstdelone(ptr, ft_del);
	printf("%s", ptr->content);
}
*/