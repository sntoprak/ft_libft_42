/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 01:52:13 by stoprak           #+#    #+#             */
/*   Updated: 2022/11/20 17:56:26 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//sonuna newline atiyor
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/* #include <fcntl.h>
int	main(void)
{
	int	i = open("test.txt", O_WRONLY | O_APPEND);

	ft_putstr_fd ("gamze\n", i);
} */