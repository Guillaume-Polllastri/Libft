/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:20:05 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/26 23:23:05 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const	char	*ptr_src;
	char	*ptr_dest;
	int	i;

	ptr_src = (const char *) src;
	ptr_dest = (char *) dest;
	i = ptr_dest - ptr_src;
	if (i < n)
		n = i;
	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		*ptr_dest++;
		*ptr_src++;
		n--;
	}
	return (dest);
}
