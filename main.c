#include "ft_printf.h"
#include <stdio.h>

int	main (void)
{
	int	i = -10;

	ft_printf("mon ft_printf\n");
	ft_printf("%c\n",  'b');
	ft_printf("%x\n" , i);
	ft_printf("%s\n",  "broibvoicnenc");
	ft_printf("%X\n" , i);
	ft_printf("%d\n",  i);
	ft_printf("%i\n" , i);
	ft_printf("%u\n",  i);
	ft_printf("%%\n");
	ft_printf("%p\n", i);

	ft_printf("le printf normal\n");
	printf("%c\n",  'b');
	printf("%x\n" , i);
	printf("%s\n",  "broibvoicnenc");
	printf("%X\n" , i);
	printf("%d\n",  i);
	printf("%i\n" , i);
	printf("%u\n",  i);
	printf("%%\n");
	ft_printf("%p\n", i);
	return (0);
}
