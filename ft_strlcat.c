/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 03:02:24 by tjiranar          #+#    #+#             */
/*   Updated: 2024/08/28 03:28:51 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srcl;
	size_t	dstl;

	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	if (dstsize <= dstl)
		return (dstsize + srcl);
	i = dstl;
	j = 0;
	while (i < dstsize - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dstl + srcl);
}

// #include <bsd/string.h>

// int	main(void)
// {
// 	unsigned int	result;
// 	char    	wsrc[50] = "ay";
// 	char		td[50] = "Mund";
// 	char    	wd[50] = "Mund";
// 	char		*d;
// 	char		*src;

// 	d = wd;
// 	src = wsrc;
// 	result = strlcat(td, src, 2);
// 	printf("%d, %s\n", result, td);
// 	result = ft_strlcat(d, src, 2);
// 	printf("%d, %s\n", result, d);
// 	return (0);
// }