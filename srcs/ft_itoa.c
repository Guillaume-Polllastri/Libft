/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:14:55 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/04 19:38:53 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	char	*res;
	int		tmp;
	int		count;

	tmp = n;
	count = 0;
	if (n < 0)
		count++;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;
	}
	if (n == 0)
		count = 1;
	res = (char *) malloc(sizeof(char) * (count + 1));
	if (!res)
		return (NULL);
	res[count] = '\0';
	if (n >= 0)
	{
		while (count > 0)
		{
			res[count - 1] = (n % 10) + '0';
			n = n / 10;
			count--;
		}
	}
	else
	{
		res[0] = '-';
		while (count > 1)
		{
			res[count - 1] = '0' - (n % 10);
			n = n / 10;
			count--;
		}
	}
	return (res);
}
