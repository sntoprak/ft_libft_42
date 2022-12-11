/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:30:15 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//alfabetik değerse 1 değilse 0 çeviriyor.
int	ft_isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/* int main()
{
	char c;
	
	c = '6';
	printf("%d", ft_isalpha(c));
	return(0);
} */