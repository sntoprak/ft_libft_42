/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:32:08 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//rakamsa 1 rakam değilse 0 çeviriyor.
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* int main()
{
	char c;

	c = 48;
	printf("%d", ft_isdigit(c));
	return(0);
} */