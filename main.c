/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codecham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:58:55 by codecham          #+#    #+#             */
/*   Updated: 2021/05/02 16:11:09 by codecham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "stdio.h"
#include <limits.h>

int	main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		ret;

	if (ac < 2)
	{
	 	get_next_line(0,&line);
		printf("%s\n",line);
		free(line);
	}
	else
	{
		line = NULL;
		fd = open(av[1], O_RDONLY);
		ret = 1;
		while (ret > 0)
		{
			ret = get_next_line(fd, &line);
			printf("[%d]-> %s\n\n\n", ret, line);
			if (ret >= 0)
				free(line);
		}
	}
}
