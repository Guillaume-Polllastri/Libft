/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:16:58 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/02 09:15:50 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;

	if (start >= ft_strlen(s))
		len = 1;
	else
		len = MIN(len + 1, ft_strlen(s) - start + 1);
	ns = (char *) ft_calloc(len, sizeof(char));
	if (!ns)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ns);
	ft_strlcpy(ns, s + start, len);
	return (ns);
}
