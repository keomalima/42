#include <string.h>
#include <stdio.h>

int main()
{
	char	dest[10] = "des";
	const char *src = "src4";

	printf("%lu\n", strlcat(dest, src, 2));
	printf("%s", dest);
	return (0);
}
