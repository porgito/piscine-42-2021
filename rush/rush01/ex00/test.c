#include <stdio.h>
#include <string.h>

int	main()
{
	char	test[4][4] = {{'1', '2', '3', '4',},
						  {'5', '6', '7', '8',},
						  {'9', '1', '2', '3',},
						  {'4', '5', '2', '4',}};
	int	*p;
	p = (char*)test;
	int	i;
	i = 0;
	while (i != 20)
	{
		printf("%s", p[i]);
		i++;
	}
}
