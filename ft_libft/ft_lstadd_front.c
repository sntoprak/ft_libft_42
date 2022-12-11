/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:38:28 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 19:57:47 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//new i listenin basına ekler
//lstnin ilk gosterdigi yapı new yapısı olur
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/* #include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*lst1;
	t_list	*new;

	new = ft_lstnew("sevde");
	ft_lstadd_front(&lst, new);
	printf("%s\n", lst->content);
	printf("%s\n", new->content);
	printf("%p", new->next);
} */