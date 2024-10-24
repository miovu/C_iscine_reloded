/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:17:08 by miovu             #+#    #+#             */
/*   Updated: 2024/10/24 18:36:02 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	len = (max - min);
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

/* int	main(void)
{
	int	min = 4;
	int	max = 10;

	int *arr = ft_range(min, max);
	for (int i = 0; i < (max - min); i++)
		printf("%d\n", arr[i]);
	return (0);
} */