/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanboudr <yanboudr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 04:19:41 by yanboudr          #+#    #+#             */
/*   Updated: 2021/01/26 04:19:41 by yanboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	count;

	count = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (*haystack && count <= len)
	{
		i = 0;
		while (needle[i] && haystack[i] && haystack[i] == needle[i])
			i++;
		if (!needle[i] && i + count <= len)
			return ((char *)haystack);
		haystack++;
		count++;
	}
	return (NULL);
}
