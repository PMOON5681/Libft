/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:06:24 by tjiranar          #+#    #+#             */
/*   Updated: 2024/08/28 23:13:08 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// #include <string.h>

// int 	main(void)
// {
// 	char dest_str[] = "Tute"; 
// 	char src_str[] = "Tutors";

// 	puts("source string [src_str] before memmove:-"); 
// 	puts(dest_str); 

// 	ft_memmove(dest_str, src_str, sizeof(src_str)); 

// 	puts("\nsource string [src_str] after memmove:-"); 
// 	puts(dest_str); 
// 	return 0; 
// }