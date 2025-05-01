/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:16:58 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/01 16:27:02 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	int		i;

	ns = (char *) malloc(sizeof(char) * (len + 1));
	if (!ns)
		return (NULL);
	i = 0;
	while (s[start])
	{
		ns[i] = s[start];
		i++;
		start++;
	}
	ns[i] = '\0';
	return (ns);
}
