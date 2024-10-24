/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:15:34 by miovu             #+#    #+#             */
/*   Updated: 2024/10/23 17:50:24 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	if (n < 0)
		ft_putchar('N');
}

/* int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(25);
	ft_is_negative(-25);
} */