/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:31:08 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/29 16:25:08 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	check_word(const char *big, const char c, int index)
{
	while (big[index])
	{
		if (c == big[index])
			return (index);
		index++;
	}
	return (-1);
}

char	*ft_strnstr(const char *big, const char *little)
{
	int i;
	int index;
	
	i = 0;
	index = 0;
	if (!little)
		return ((char *) big);
	while (little[i])
	{
		if (check_word(big, little[i], index) == -1)
		{
			return (NULL);
		}
		else
		{
			index = check_word(big, little[i], index + 1);
			i++;
		}
	}
	return (big + 2);
}
