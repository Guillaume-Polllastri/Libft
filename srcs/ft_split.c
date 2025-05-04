/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:27:46 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/04 17:36:13 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	count_word(char const *s, char c)
{
	int	i;
	int	in_word;
	int	count;

	i = 0;
	in_word = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

int	get_start(char const *s, char c, int len)
{
	while (s[len])
	{
		if (c != s[len])
			return (len);
		len++;
	}
	return (len);
}

int	get_sep(char const *s, char c, int start)
{
	while (s[start])
	{
		if (c == s[start])
			return (start);
		start++;
	}
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int	words;
	int	i;
	int	start;
	int	sep;
	int	len;

	if (!s)
		return (NULL);
	words = count_word(s, c);
	res = (char **) malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	start = 0;
	sep = 0;
	len = 0;
	while (i < words)
	{
		start = get_start(s, c, sep);
		sep = get_sep(s, c, start);
		len = sep - start;
		res[i] = ft_substr(s, start, len);
		i++;
	}
	res[i] = NULL;
	return (res);
}
