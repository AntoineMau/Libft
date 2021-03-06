/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:01:22 by judumay           #+#    #+#             */
/*   Updated: 2019/11/07 15:11:00 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# define BUFF_SIZE 4096

typedef struct	s_fd
{
	int			fd;
	char		*data;
	char		*offset;
	struct s_fd	*next;
}				t_fd;

int				get_next_line(const int fd, char **line);

#endif
