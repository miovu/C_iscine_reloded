/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:10:54 by miovu             #+#    #+#             */
/*   Updated: 2024/10/24 16:04:26 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
}
 */

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/* int	main(void)
{
	char	*str = "Hello";

	ft_putstr(str);
	return (0);
} */