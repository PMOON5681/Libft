/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 03:55:13 by tjiranar          #+#    #+#             */
/*   Updated: 2024/08/28 04:01:23 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		last;
	char	ch;

	i = 0;
	last = -1;
	ch = (char)c;
	while (str[i])
	{
		if (str[i] == ch)
			last = i;
		i++;
	}
	if (str[i] == ch)
		last = i;
	if (last >= 0)
		return ((char *)&str[last]);
	return (NULL);
}

// int	main(void)
// {
// 	puts(ft_strrchr("weqedewedasefgf",'d'));
// }