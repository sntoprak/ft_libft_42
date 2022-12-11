/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:03:32 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 17:48:06 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
//stringi fdnin icine yazar
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		write (fd, "(NULL)", 6);
	else
		write (fd, s, ft_strlen(s));
}

/* int	main(void)
{
	int	i = open("test.txt", O_WRONLY);
	ft_putstr_fd ("sevde", i);
} */