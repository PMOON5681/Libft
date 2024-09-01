/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 01:34:26 by tjiranar          #+#    #+#             */
/*   Updated: 2024/08/29 02:56:03 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
		ft_memcpy(dst, src, srclen + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (srclen);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int     main(void)
// {
// /*      char    w[6] = "hello";
//         char    w2[6] = "";
//         char    *dest;
//         char    *src;
//         int     lenght;

//         src = w;
//         dest = w2;
//         lenght = ft_strlcpy(dest, src, 0);
//         printf("%d, %s", lenght, dest);
//         */
//             //unsigned int ssize = 8;
//     char s[] = "sourcecode";
//     char d[] = "";
//         char r[] = "";
//     int a;

//     a = ft_strlcpy(d,s,8);
//     int b = strlcpy(r, s, 8);
//     printf("%d : %s\n%d : %s",a, d, b ,r);
//     //printf("%s",d);
// }