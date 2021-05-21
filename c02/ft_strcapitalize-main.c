#include <stdio.h>

char 	*ft_strcapitalize(char *str);

int main() {
	char	str[61] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+um";
	char	*rst_str = NULL;

	printf("Bef\n\tstr: %s\trst_str: %s\n", str, rst_str);
	rst_str = ft_strcapitalize(str);
	printf("Aft\n\tstr: %s\trst_str: %s\n", str, rst_str);
	return (0);
}
