/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdjoinc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:57:25 by judumay           #+#    #+#             */
/*   Updated: 2019/11/07 15:08:16 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdjoinc(char *s1, char c)
{
	char	*str;

	if (!(str = ft_strnew(ft_strlen(s1) + 2)))
		return (NULL);
	ft_strcat(str, s1);
	str[ft_strlen(s1)] = c;
	str[ft_strlen(s1) + 1] = '\0';
	ft_strdel(&s1);
	return (str);
}
