/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:22:47 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//girilen karakteri dizi icinde arar.
//son gectigi yeri ve sonrasini dondurur.
//
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
			i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* int main()
{
	char c[] = "sdfjghsdjfgh";

	printf("%s", ft_strrchr(c, 'j'));
} */