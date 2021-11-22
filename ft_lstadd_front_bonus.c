/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:31:31 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/22 16:10:25 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
	t_list	*ptr[4];
	t_list	*head;

	head = NULL;
	int i = 0;
	while(i < 4)
	{
		ptr[i++] = ft_lstnew("Anas");
	}
	i = 0; 
	while(i < 4)
	{
		ft_lstadd_front(&head, ptr[i++]);
	}
	i = 0;
	while(i < 4)
	{
		printf("%s\n", ptr[i]->content);
		ptr[i]->next = NULL;
		i++;
	}
	
}
*/