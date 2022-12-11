/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:58:28 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 21:03:12 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//new i listenin sonuna ekler
//lstnin son gosterdigi yapı new yapısı olur.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*snt;

	if (*lst == NULL)
			*lst = new;
	else
	{
		snt = ft_lstlast(*lst);
		snt->next = new;
	}
}
/* #include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*lst1;
	t_list	*new;

	lst = ft_lstnew("sevde");
	lst1 = ft_lstnew("42");
	new = ft_lstnew("ecole");
	lst->next = lst1;
	ft_lstadd_back(&lst, new);
	printf("%d", ft_lstsize(lst));
} */