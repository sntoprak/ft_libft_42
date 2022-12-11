/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:47:39 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 15:27:35 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//integer olan bir degeri stringe cevirir.
char	*to_str(char *s, int snt, int n, int sayi)
{
	int	rakam;

	if (n < 0)
		sayi = 1;
	s[snt] = '\0';
	while (snt > 0)
	{
		snt--;
		rakam = n % 10;
		n /= 10;
		s[snt] = rakam + '0';
		if (sayi == 1)
			s[0] = '-';
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		snt;
	int		sayi;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sayi = n;
	snt = 0;
	if (!n)
		snt = 1;
	while (sayi != 0)
	{
		snt++;
		sayi /= 10;
	}
	if (n < 0)
	{
		snt++;
		sayi = 1;
		n *= -1;
	}
	s = (char *)malloc(sizeof(char) * snt + 1);
	if (!s)
		return (NULL);
	return (to_str(s, snt, n, sayi));
}

/* int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(34567));
} */
