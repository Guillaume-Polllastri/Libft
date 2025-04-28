/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:52:22 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/28 15:13:43 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *) s;
	while (n > 0)
	{
		if (*ptr == (char) c)
			return ((void *) ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	void	*str;
	str = ft_memchr("toto", 'o', 2);
	printf("%s\n", (char *) str);
}*/
