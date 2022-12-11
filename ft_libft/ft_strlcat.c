/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:51:45 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//destin sonuna srcyi ekler(destsize - dlen - 1)
//return olarak, dest ve src uzunluğu toplanir dondurulur.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize < len_dst)
		return (len_src + dstsize);
	else
	{
		dst = dst + len_dst;
		ft_strlcpy(dst, src, dstsize - len_dst);
		return (len_src + len_dst);
	}	
}

/* int	main(void)
{
	char d[] = "se";
	char s[] = "toprak";

	printf("%zu", ft_strlcat(d, s, 6));
} */