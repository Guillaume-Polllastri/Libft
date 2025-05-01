/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:18:48 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/01 16:13:40 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	count_chr_str(char const *set, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (set[i])
	{
		if (c == set[i])
			count++;
		i++;
	}
	return (i);
}

static int	len_trim(char const *s1, char const *set)
{
	int	i;
	int	len;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i])
	{
		len = len - count_chr_str(set, s1[i]);
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		len;

	len = len_trim(s1, set);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (count_chr_str(set, s1[i]) == 0)
		{
			res[j] = s1[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}
