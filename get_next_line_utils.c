/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codecham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 17:28:47 by codecham          #+#    #+#             */
/*   Updated: 2021/05/01 17:28:50 by codecham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_line(char *save)
{
	int	i;

	if (!save)
		return (-2);
	i = 0;
	while (save[i])
	{
		if (save[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int	ft_error(char **save, char *temp, int fd)
{
	if (save[fd])
		free(save[fd]);
	if (temp)
		free(temp);
	return (-1);
}

void	ft_copy_line(char *save, char *new, int i, int j)
{
	while (save[i + j])
	{
		new[j] = save[i + j];
		j++;
	}
	new[j] = '\0';
}
