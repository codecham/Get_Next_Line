/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codecham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 17:28:07 by codecham          #+#    #+#             */
/*   Updated: 2021/05/01 17:28:58 by codecham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "unistd.h"
# include "stdlib.h"
# include "limits.h"

int		get_next_line(int fd, char **line);
int		ft_strlen(char *str);
int		is_line(char *save);
int		ft_error(char **save, char *temp, int fd);
void	ft_copy_line(char *save, char *new, int i, int j);

#endif
