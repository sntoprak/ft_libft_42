/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:54:56 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 21:44:09 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//lstnin tum contentlerine fonksiyonu uygulayip
//yeni node olusturuyor.
//olusturulan nodelari first listesine ekliyor.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (lst == NULL || f == NULL)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst-> content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst-> next;
	}
	return (first);
}

/* void	del(void *content)
{
	free(content);
}

void	f(void *content)
{
	int		i;
	char	*str;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*lst1;

	lst = ft_lstnew(ft_strdup("sevde"));
	lst1 = ft_lstnew(ft_strdup("toprak"));
	lst->next = lst1;
	printf("%s\n", lst->content);
	printf("%s\n", lst1->content);
	ft_lstmap(lst, 'f', del);
} */
