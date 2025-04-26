/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:14:21 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/26 23:30:49 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int	main()
{
	char	str[20];
	
	ft_bzero(str, 20);
	ft_memcpy(str, "abcdef", 6);
	ft_memcpy(str + 6, str, 10);
	printf("%s\n", str);
	ft_bzero(str, 20);
	ft_memcpy(str, "abcdef", 6);
	ft_memmove(str + 6, str, 10);
	printf("%s\n", str);
	return (0);
}
