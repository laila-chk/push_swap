#include <stdio.h>
#include <string.h>


int main(int ac, char **av)
{
	int i = 1;
	while (1)
	{
		while (av[i][strlen(av[i]) -1] != '\n')
		{
			printf("hurusay\n");
			i++;
		}
		printf("second phase\n");
		if (av[i][strlen(av[i]) -1] == '\0')
			break;
	}
}
