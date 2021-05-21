

#include <unistd.h>

void		ft_putchars(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void		ft_puts(void)
{
	char b[2];

	b[0] = ',';
	b[1] = ' ';
	write(1, &b[0], 1);
	write(1, &b[1], 1);
}

void		ft_ifput(char a, char b, char c)
{
	if (a < b && b < c)
	{
		if (a == '7' && b == '8')
		{
			ft_putchars(a, b, c);
		}
		else
		{
			ft_putchars(a, b, c);
			ft_puts();
		}
	}
}

void		ft_print_comb(void)
{
	char c[3];

	c[0] = '0';
	c[1] = '1';
	c[2] = '2';
	while (c[0] <= '7' || c[1] < '8' || c[2] < '9')
	{
		if (c[1] == '9' && c[2] == '9')
		{
			c[0]++;
			c[1] = '0';
			c[2] = '0';
		}
		else if (c[2] == '9')
		{
			ft_ifput(c[0], c[1], c[2]);
			c[1]++;
			c[2] = '0';
		}
		else
		{
			ft_ifput(c[0], c[1], c[2]);
			c[2]++;
		}
	}
}
