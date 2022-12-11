/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:18:54 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 16:01:38 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//char olarak girilen diziyi inte cevirir.
int	ft_atoi(const char *str)
{
	int	s;
	int	i;
	int	neg;

	i = 0;
	s = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		s = s * 10 + (str[i] - 48);
		i++;
	}
	return (s * neg);
}

/* int	main(void)
{
	char a[] = "         -1234";

	printf("%d\n", ft_atoi(a));
	printf("%d", atoi("  -987"));
} */