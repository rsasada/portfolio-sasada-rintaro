#include <stdio.h>

int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	int rtn;

	if (argc > 2)
		return (0);
	rtn = ft_atoi(argv[1]);
	printf("\n----\nrtn: %d", rtn);
	return 0;
}
