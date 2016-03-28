# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
	int i,j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
			printf("%d*%d=%2d\t", i,j,i * j);
		printf("\n");
	}

	srand(time(NULL));
	int num = rand() % 1000;
	printf("%d\n", num);

	return 0;
}
