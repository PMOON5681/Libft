/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:02:34 by tjiranar          #+#    #+#             */
/*   Updated: 2024/08/28 01:42:39 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)ptr;
	while (len > 0)
	{
		*(temp++) = (unsigned char)value;
		len--;
	}
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hellooooo";
// 	ft_memset(str, '-', 3);
// 	puts (str);
// 	return (0);
// }