/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apenrose <apenrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 00:44:56 by apenrose          #+#    #+#             */
/*   Updated: 2020/12/26 23:29:33 by apenrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*ft_substr(char *s, unsigned int start, size_t len)
{
	char			*ss;
	unsigned int	i;

	i = 0;
	if (!(s))
		return (NULL);
	if (!(ss = ((char *)malloc(len + 1))))
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		ss[0] = '\0';
		return (ss);
	}
	while (s && (i < len))
	{
		ss[i] = s[start];
		i++;
		start++;
	}
	ss[i] = '\0';
	return (ss);
}

int				ft_strlen(const char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

char			*ft_strjoin(char *s1, char *s2)
{
	char	*uni;
	int		g;
	int		i;

	i = 0;
	g = 0;
	if (!(s2) || !(uni = ((char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1))))
		return (NULL);
	while (s1 && s1[i])
	{
		uni[g] = s1[i];
		i++;
		g++;
	}
	i = 0;
	while (s2[i])
	{
		uni[g] = s2[i];
		i++;
		g++;
	}
	uni[g] = '\0';
	return (uni);
}
