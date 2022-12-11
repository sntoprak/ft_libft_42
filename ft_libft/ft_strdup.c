/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:53:14 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s, n'den uzunsa, yalnızca n bayt kopyalanır ve sonuna bir NULL ('\0') eklenir.
//malloc ile yer acip icine str yaziyor.
char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	s2 = malloc(sizeof(char) * (ft_strlen(s1) +1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/* int main()
{
	char c[] = "sevdenur";
    char	*t = ft_strdup(c);

    printf("%s", t);
} */