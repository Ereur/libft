/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:15:40 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/22 18:35:38 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	ft_shi7aja(void *content)
{
	char *cont;
	cont = content;
	cont[0] = 'f';
}

int main(void)
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
	ft_lstiter(head, ft_shi7aja);
	while(head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
} */