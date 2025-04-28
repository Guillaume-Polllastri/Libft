/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:56:36 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/28 10:57:00 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	int	i;
	int	src_size;

	i = 0;
	while (src[i] && i < (siz - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	src_size = ft_strlen(src);
	return (src_size);
}
