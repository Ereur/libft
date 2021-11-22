/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:55:41 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/22 18:43:47 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = NULL;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
}
/*
void	ft_del(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*ptr[4];
	t_list	*head;
	head = NULL;
	int i = 0;

	while(i < 4)
	{
		ptr[i++] = ft_lstnew(ft_strdup("Peanut")); 
	}
	i = 0;
	while (i < 4)
	{
		ft_lstadd_back(&head, ptr[i]);
		i++;
	}
	while(head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	
	ft_lstclear(&head, &ft_del);
	printf("%p", head);
}
*/