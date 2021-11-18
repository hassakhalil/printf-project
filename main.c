#include "ft_printf.h"
#include <stdio.h>

int main ()
{
	int a = -1;
	char s[] = "fucking hell";
	char *ptr = s;

	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);
}
