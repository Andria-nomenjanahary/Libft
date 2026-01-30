/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvoandri <yvoandri@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:04:18 by yvoandri          #+#    #+#             */
/*   Updated: 2026/01/21 14:54:22 by yvoandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newsub;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
		return (ft_calloc(1, sizeof(char)));
	if (len >= slen - start)
		len = slen - start;
	newsub = malloc(len + 1);
	if (!newsub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newsub[i] = s[start + i];
		i++;
	}
	newsub[i] = '\0';
	return (newsub);
}
