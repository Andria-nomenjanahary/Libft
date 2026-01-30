/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvoandri <yvoandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:37:07 by yvoandri          #+#    #+#             */
/*   Updated: 2026/01/29 08:15:52 by yvoandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*us;

	i = 0;
	while (s[i] != '\0')
		i++;
	us = (char *)s;
	while (i >= 0)
	{
		if ((unsigned char)c == us[i])
			return (&us[i]);
		i--;
	}
	return (0);
}
