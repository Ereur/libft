/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:16:59 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/22 18:38:21 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int main()
{
	t_list *head = NULL;
	t_list *ptr[4];
	
	ptr[0] = ft_lstnew(ft_strdup("Anas"));
	ptr[1] = ft_lstnew(ft_strdup("Peanut"));
	ptr[2] = ft_lstnew(ft_strdup("Nors"));
	ptr[3] = ft_lstnew(ft_strdup("Ok"));
	int i = 0;
	while (i < 4)
	{
		ft_lstadd_back(&head, ptr[i++]);
	}
	t_list *chad = ft_lstlast(head);
	printf("%s", chad->content);
}
*/