/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:47:10 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 20:16:19 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//listin son degerini doner.
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
/* #include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*lst1;
	t_list	*lst2;

	lst = ft_lstnew("sevde");
	lst1 = ft_lstnew("42");
	lst2 = ft_lstnew("ecole");
	lst->next = lst1;
	lst1->next = lst2;
	printf("%s", ft_lstlast(lst)->content);
} */