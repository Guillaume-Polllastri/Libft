/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:50:39 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/29 12:23:30 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	j = 0;
	while (i < siz && dst[i])
		i++;
	dst_len = i;
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
	return (dst_len + j);
}
