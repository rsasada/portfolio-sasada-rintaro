/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsasada <rsasada@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:15:25 by rsasada           #+#    #+#             */
/*   Updated: 2021/05/21 11:12:52 by rsasada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_setting(void)
{
	int	nb;

	ft_putchar('-');
	ft_putchar('2');
	nb = 147483648;
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	x[10];
	int		y;

	y = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb == -2147483648)
		nb = ft_setting();
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb > 0)
	{
		x[y] = nb % 10 + '0';
		nb = nb / 10;
		y++;
	}
	while (y > 0)
	{
		y--;
		ft_putchar(x[y]);
	}
}
