/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:08:01 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 17:28:20 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//bellekte bos bir alan acar.
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*str;

	str = malloc(count * size);
	if (!str)
		return (NULL);
	str = ft_memset(str, '\0', count * size);
	return (str);
}

/* int main() 
{
    int* a = (int*) calloc(5, sizeof(int));
} */