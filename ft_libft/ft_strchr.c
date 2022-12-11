/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:04:25 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 17:24:57 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//girilen karakteri dizi icinde arar.
//ilk gectigi yeri ve sonrasini dondurur.
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' || c == '\0')
	{
		if (s[i] == (unsigned char)(c))
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/* int main()
{
	char a[] = "sevhfjgkvmse";

	printf("%s", ft_strchr(a, 'v'));
} */