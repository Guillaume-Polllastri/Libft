/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:50:39 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/28 20:19:43 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (i < siz && dst[i])
		i++;
	len = i;
	while ((i + 1) < siz && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	while (src[j])
		j++;
	while (i < siz)
	{
		dst[i] = '\0';
		i++;
	}
	return (len + j);
}
