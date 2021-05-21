#include <stdio.h>

int	ft_fibonacci(int index);

int main() {
	int index = 3;
	int rtn;

	rtn = ft_fibonacci(index);
	printf("index: %d\trtn: %d\n", index, rtn);
	index = -3;
	rtn = ft_fibonacci(index);
	printf("index: %d\trtn: %d\n", index, rtn);
	index = 10;
	rtn = ft_fibonacci(index);
	printf("index: %d\trtn: %d\n", index, rtn);
	return 0;
}
