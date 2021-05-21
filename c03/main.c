#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main() {
	char	str[] = "The laughing dog jumps over the lazy fox";
	char	to_find[] = "aaaa";
	char 	*rtn;
	char	ft_str[] = "The laughing brown dog jumps over the lazy fox";
	char	ft_to_find[] = "lazy";
	char	*ft_rtn;

	rtn = strstr(str, to_find);
	ft_rtn = ft_strstr(ft_str, ft_to_find);
	printf("str: %s\nto_find: %s\nrtn: %s\n", str, to_find, rtn);
	printf("ft_str: %s\nft_to_find: %s\nft_rtn: %s\n", ft_str, ft_to_find, ft_rtn);
	return 0;
}
