/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:40:10 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//sntnin içinde n kadar c arar. buldugunda bellek adresini geri dondurur.
void	*ft_memchr(const void *snt, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)snt + i) == (unsigned char)c)
			return ((void *)snt + i);
		i++;
	}
	return (NULL);
}

/* int main()
{
	char a[] = "sevde";

	printf("%p", ft_memchr(a, 'v', 3));
} */