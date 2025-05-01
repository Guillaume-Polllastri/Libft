/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:14:21 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/01 10:30:21 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

char	*strnstr(const char *big, const char *little, size_t len);

/* ************************************************************************** */

/* ************************************************************************** */

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

/* ************************************************************************** */

/* ************************************************************************** */

void	test_strncmp(void)
{
	printf("ft_strncmp(abcdefgh, abcdwxyz, 4) \nExpected : %d Result : %d\n", strncmp("abcdefgh", "abcdwxyz", 4), ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("ft_strncmp(abcdefgh, abcdwxyz, 0) \nExpected : 0 Result : %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 0));
	printf("ft_strncmp(abcdef, abc\\375xxx, 5) \nExpected : 0 Result : %d\n", ft_strncmp("abcdef", "abc\375xxx", 5));
}

/* ************************************************************************** */

/* ************************************************************************** */

void	test_strrchr(void)
{
	printf("Expected : o Result: %s\n", ft_strrchr("toto", 'o'));
	printf("Expected : NULL Result: %s\n", ft_strrchr("bonjour", '\0'));
}

/* ************************************************************************** */

/* ************************************************************************** */

void	test_memcmp(void)
{
	printf("toto, tata --> %d\n", ft_memcmp("toto", "tata", 4));
	printf("toto, toto --> %d\n", ft_memcmp("toto", "toto", 4));
	printf("toto, tutu --> %d\n", ft_memcmp("toto", "tutu", 4));
	printf("abcdefgh, abcdefgx --> %d\n", ft_memcmp("abcdefgh", "abcdefgx", 7));
	printf("NOTHING, salut --> %d\n", ft_memcmp("", "salut", 2));
}

/* ************************************************************************** */

/* ************************************************************************** */

void	test_strnstr(void)
{
	const char	*largestring = "Foo Bar	Baz";
	const char	*smallstring = "ar";

	if (ft_strnstr(largestring, smallstring, 20) == NULL)
	{
		printf("%s", "NULL");
		return ;
	}
	printf("ft_strnstr(Foo Bar Baz, ar, 20)\nExpected : %s\nResult : %s\n\n", strnstr(largestring, smallstring, 20), ft_strnstr(largestring, smallstring, 20));
	printf("ft_strnstr(Foo Bar Baz, ar, -1)\nExpected : %s\nResult : %s\n\n", strnstr(largestring, smallstring, -1), ft_strnstr(largestring, smallstring, -1));
	printf("ft_strnstr(abcdefgh, abc, 3)\nExpected : %s\nResult : %s\n\n", strnstr("abcdefgh", "abc", 3), ft_strnstr("abcdefgh", "abc", 3));
	printf("ft_strnstr(aaabcabcd, aabc, -1)\nExpected : %s\nResult : %s\n\n", strnstr("aaabcabcd", "aabc", -1), ft_strnstr("aaabcabcd", "aabc", -1));
	printf("ft_strnstr(aaabcabcd, cd, 8)\nExpected : %s\nResult : %s\n\n", strnstr("aaabcabcd", "cd", 8), ft_strnstr("aaabcabcd", "cd", 8));
}

/* ************************************************************************** */
// ft_putchar_fd

/* ************************************************************************** */

void	test_ft_putchar_fd(void)
{
	ft_putchar_fd('c', 0);
	printf("%s", "\n");
	ft_putchar_fd('c', 1);
	printf("%s", "\n");
	ft_putchar_fd('c', 2);
	printf("%s", "\n");
}

void	test_ft_putstr_fd(void)
{
	char	*s;

	s = "Le test est bon";
	ft_putstr_fd(s, 0);
	printf("%s", "\n");
	ft_putstr_fd(s, 1);
	printf("%s", "\n");
	ft_putstr_fd(s, 2);
	printf("%s", "\n");
}

/* ************************************************************************** */

/* ************************************************************************** */

int	main()
{
	test_ft_putstr_fd();
	return (0);
}
