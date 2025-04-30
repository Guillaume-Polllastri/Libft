/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:14:21 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/30 10:14:37 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

void test_memset(void)
{
	int i;
	char	str[6];
	ft_memset(str, (int)'s', 5);
	str[5] = '\0';
	
	i = 0;
	while (i < 5)
	{
		assert(str[i] == 'a');
		i++;
	}
}

void	test_memcmp(void)
{
	printf("%d\n", ft_memcmp("toto", "tata", 4));
	printf("%d\n", ft_memcmp("toto", "toto", 4));
	printf("%d\n", ft_memcmp("toto", "tutu", 4));
	printf("%d\n", ft_memcmp("abcdefgh", "abcdefgx", 7));
	printf("%d\n", ft_memcmp("", "salut", 2));
}
/*
void	test_strnstr(void)
{
	const char	*largestring = "Foo Bar	Baz";
	const char	*smallstring = "ar";

	if (ft_strnstr(largestring, smallstring) == NULL)
	{
		printf("%s", "NULL");
		return ;
	}
	printf("%s\n", ft_strnstr(largestring, smallstring));
}
*/
int	main()
{
	test_memcmp();
	return (0);
}
