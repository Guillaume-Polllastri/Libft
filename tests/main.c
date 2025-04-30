/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:14:21 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/30 13:35:35 by gpollast         ###   ########.fr       */
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

void	test_strncmp(void)
{
	printf("ft_strncmp(abcdefgh, abcdwxyz, 4) \nExpected : 0 Result : %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("ft_strncmp(abcdefgh, abcdwxyz, 0) \nExpected : 0 Result : %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 0));
	printf("ft_strncmp(abcdef, abc\\375xxx, 5) \nExpected : 0 Result : %d\n", ft_strncmp("abcdef", "abc\375xxx", 5));
}

void	test_strrchr(void)
{
	printf("Expected : o Result: %s\n", ft_strrchr("toto", 'o'));
	printf("Expected : NULL Result: %s\n", ft_strrchr("bonjour", '\0'));
}
void	test_memcmp(void)
{
	printf("toto, tata --> %d\n", ft_memcmp("toto", "tata", 4));
	printf("toto, toto --> %d\n", ft_memcmp("toto", "toto", 4));
	printf("toto, tutu --> %d\n", ft_memcmp("toto", "tutu", 4));
	printf("abcdefgh, abcdefgx --> %d\n", ft_memcmp("abcdefgh", "abcdefgx", 7));
	printf("NOTHING, salut --> %d\n", ft_memcmp("", "salut", 2));
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
	test_strncmp();
	return (0);
}
