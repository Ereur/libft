/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:36:38 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/22 16:03:52 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!(*lst))
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{	
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}
/*
int	main(void)
{
	t_list *ptr[4];
	t_list	*head;

	head = NULL;
	int i = 0;

	while ( i < 4 )
	{
		ptr[i] = ft_lstnew("Anas");
		i++;
	}
	i = 0; 
	while(i < 4)
	{
		ft_lstadd_back(&head, ptr[i]);
		i++;
	}
	while(head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}
*/
