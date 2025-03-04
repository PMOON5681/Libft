/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 01:55:27 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/07 08:42:36 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static int	ft_free(char **str, int size)
{
	while (size >= 0)
		free(str[size--]);
	free(str);
	return (-1);
}

static void	ft_split_word(char *dst, const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
}

int	ft_on_split(char **split, const char *str, char c)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '\0' || str[i] == c) == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == '\0' || str[i + j] == c) == 0)
				j++;
			split[w] = (char *)malloc(sizeof(char) * (j + 1));
			if (split[w] == NULL)
				return (ft_free(split, w - 1));
			ft_split_word(split[w], str + i, c);
			i += j;
			w++;
		}
	}
	split[w] = NULL;
	return (0);
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	int		count;

	count = ft_word_count(str, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (split == NULL)
		return (NULL);
	split[count] = 0;
	if (ft_on_split(split, str, c) == -1)
		return (NULL);
	return (split);
}

// int	main(void)
// {
// 	char	**strs;
// 	strs = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", 94);
// 	int i = 0;
// 	while (strs[i] != NULL)
// 	{
// 	    printf("%s\n", strs[i]);
// 		free(strs[i]);
// 	    i++;
// 	}
// 	free(strs);
// }