/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:47:37 by rmicheli          #+#    #+#             */
/*   Updated: 2021/12/07 12:50:37 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pip.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		y;
	int		m;
	char	*t;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	t = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 2);
	if (!t)
		return (0);
	m = 0;
	y = 0;
	while (s1[m])
		t[y++] = s1[m++];
	m = 0;
	while (s2[m])
		t[y++] = s2[m++];
	t[y] = '\0';
	return (t);
}
