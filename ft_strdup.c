/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 04:37:36 by tjiranar          #+#    #+#             */
/*   Updated: 2024/08/28 04:42:03 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = (char *)malloc(ft_strlen(src) + 1);
	if (!ptr)
		return (0);
	ft_strcpy(ptr, src);
	return (ptr);
}

// #include <assert.h>
// #include <string.h>
// #include <stdio.h>

// int     main(void)
// {
//         char    *s = "Hello";
//         char    *w;

//         w = ft_strdup(s);
//         assert(strcmp(s, w) == 0);
//         printf("%s\n%s", s, w);
//         free(w);
// }