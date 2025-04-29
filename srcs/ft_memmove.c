/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:20:05 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/29 11:29:49 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*ptr_src;
	char		*ptr_dest;
	size_t		len_src;
	size_t		len_dest;
	size_t		i;

	ptr_src = (const char *) src;
	ptr_dest = (char *) dest;
	len_src = ft_strlen(ptr_src);
	len_dest = ft_strlen(ptr_dest);
	i = 0;
	if (ptr_dest < ptr_src)
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[len_src];
			i++;
			len_src--;
		}
	}
	i = 0;
	else
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	return (dest);
}
