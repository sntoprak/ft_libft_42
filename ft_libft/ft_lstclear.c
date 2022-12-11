/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:13:11 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 21:41:52 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//elemani siler.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{	
		while (*lst && lst)
		{
			temp = (*lst)-> next;
			ft_lstdelone((*lst), del);
			*lst = temp;
		}
	}
}

/* void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*lst1;
	t_list	*lst2;

	lst = ft_lstnew(ft_strdup("sevde"));
	lst1 = ft_lstnew(ft_strdup("toprak"));
	lst2 = ft_lstnew(ft_strdup("42"));
	lst->next = lst1;
	lst1->next = lst2;
	printf("%s\n", lst->content);
	printf("%s\n", lst1->content);
	printf("%s\n", lst2->content);
	ft_lstclear(&lst, del);
	printf("%s\n", lst->content);
	printf("%s\n", lst1->content);
	printf("%s\n", lst2->content);
} */