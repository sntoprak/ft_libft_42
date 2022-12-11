/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:07:32 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 21:09:26 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//lstnin contentini temizler ve serbest birakir.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst -> content);
	free (lst);
}
/* void	del(void *content)
{
	free(content);
}
#include <stdio.h>
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("sevde"));
	printf("%s\n", lst->content);
	ft_lstdelone(lst, del);
	printf("%s\n", lst->content);
} */