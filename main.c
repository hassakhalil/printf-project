#include "ft_printf.h"
#include <stdio.h>

int main ()
{
	int a = -1;
	char s[] = "fucking hell";
	char *ptr = s;

	//printf("||-||this is return value%d\n||-||", ft_printf("%d\n", a));
	printf("%u\n", a);
}
