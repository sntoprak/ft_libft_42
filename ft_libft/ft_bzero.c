/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:48:20 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// s dizisine n kadar null doldurur. memsetin null eklenen hali.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/* int	main()
{
	char s[]= "deneme";
	ft_bzero(s, 2);
	printf("%s", s);
} */