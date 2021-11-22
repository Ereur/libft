/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:29:46 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/22 18:50:06 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),	void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	if (lst)
	{
		head = ft_lstnew(f(lst->content));
		if (!head)
			return (NULL);
		lst = lst->next;
		while (lst)
		{
			new = malloc(sizeof(t_list));
			if (!new)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			new->next = NULL;
			ft_lstadd_back(&head, new);
			new->content = f(lst->content);
			lst = lst->next;
		}
	}
	return (head);
}
/*
void	*ft_up(void *content)
{
	char	*ptr;

	ptr = content;
	ptr[0] = 'Z';
	return (content);
}

void	ft_del(void *content)
{
	free(content);
}

int	main()
{

	t_list *head = NULL;
	t_list *ptr[4];
	t_list *new;
	ptr[0] = ft_lstnew(ft_strdup("Anas"));
	ptr[1] = ft_lstnew(ft_strdup("Peanut"));
	ptr[2] = ft_lstnew(ft_strdup("Nors"));
	ptr[3] = ft_lstnew(ft_strdup("Ok"));
	int i = 0;
	while (i < 4)
	{
		ft_lstadd_back(&head, ptr[i++]);
	}
	new = ft_lstmap(head, ft_up, ft_del);
	while(new)
	{
		printf("%s\n", new->content);
		new = new->next;
	}
	
}
*/