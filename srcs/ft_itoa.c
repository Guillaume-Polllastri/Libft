/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:14:55 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/01 17:51:23 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	char	*res;
	int		tmp;
	int		count;
	int		i;

	tmp = n;
	count = 0;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;
	}
	if (n < 0)
	{
		count++;
		res[0] = '-';
		i++;
	}
	res = (char *) malloc(sizeof(char) * (count + 1));
	if (n >= 0)
	{
		while (count >= 0)
		{
			res[count - 1] = (n % 10) + '0';
			n = n / 10;
			count--;
		}
	}
	else
	{
		n = -n;
		while (count > 0)
		{
			res[count - 1] = (n % 10) + '0';
			n = n / 10;
			count--;
		}
	}
	return (res);
}
