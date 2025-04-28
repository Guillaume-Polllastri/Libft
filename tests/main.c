/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:14:21 by gpollast          #+#    #+#             */
/*   Updated: 2025/04/27 21:35:09 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <assert.h>

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

int	main()
{
	test_memset();
	printf("All tests passed\n");
}
