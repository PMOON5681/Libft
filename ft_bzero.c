/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:34:18 by tjiranar          #+#    #+#             */
/*   Updated: 2024/08/27 21:53:58 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = (char *)s;
	while (n > 0)
	{
		*(temp++) = '\0';
		n--;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hellooooo";
// 	ft_bzero(str, 0);
// 	printf("%s\n", str);
// 	return (0);
// }