/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:28:08 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//yeni bir node oluşturur.
t_list	*ft_lstnew(void *content)
{
	t_list	*sntlist;

	sntlist = malloc(sizeof(t_list));
	if (!sntlist)
		return (NULL);
	sntlist -> content = content;
	sntlist -> next = NULL;
	return (sntlist);
}

/* int	main(void)
{
	int	content = 3;

	t_list *test;
	test = ft_lstnew ((void *)content);
	printf("%d", test->next);
} */
