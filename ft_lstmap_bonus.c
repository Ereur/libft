/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:29:46 by aamoussa          #+#    #+#             */
/*   Updated: 2021/11/14 21:22:01 by aamoussa         ###   ########.fr       */
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
		new = malloc(sizeof(t_list));
		if (!new)
			return (NULL);
		head = new;
		new->content = f(lst->content);
		new->next = NULL;
		lst = lst->next;
		while (lst)
		{
			new = malloc(sizeof(t_list));
			if (!new)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			ft_lstadd_back(&head, new);
			new->content = f(lst->content);
			lst = lst->next;
		}
	}
	return (head);
}
/*int	main(void)
{

}
*/