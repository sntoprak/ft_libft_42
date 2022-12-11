/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:33:13 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//d de s yi arar ve bulduğunda devamini return eder.
char	*ft_strnstr(const char *s, const char *d, size_t n)
{
	size_t	i;
	size_t	j;

	if (d[0] == '\0')
		return ((char *)s);
	i = 0;
	while (s[i] && i < n)
	{
		j = 0;
		while (s[i + j] && d[j] && (i + j) < n
			&& s[i + j] == d[j])
			j++;
		if (!d[j])
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

/* int main()
{
	char a[] = "merhabadunya";
	char b[] = "d";

	printf("%s", ft_strnstr(a, b, 8));
} */