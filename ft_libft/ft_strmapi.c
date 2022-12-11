/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:53:56 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//f fonksiyonunu stringin butun karakterlerine uygular.

/* char	f(unsigned int i, char c)
{
	(void)i;

	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = -1;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[++i])
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	char	str1[] = "sevde";
	char	*str2;

	str2 = ft_strmapi(str1, *f);
	printf ("%s\n", str2);
} */
