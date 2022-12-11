/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:50:09 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//alfebetik ve rakam olup olmadığını sorguluyor. 0 or 1.
int	ft_isalnum(int c)
{
	int	i;

	i = 0;
	return ((c >= '0' && c <= '9') || \
	((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
}

/* int main()
{
	char c;

	c = 'f';
	printf("%d", ft_isalnum(c));
} */