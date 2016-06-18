#include <stdlib.h>
#include <stdlib.h>

int main()
{
	int num[3][4] = {{12,23,42,18},
					 {43,22,16,14},
					 {31,13,19,28}};
					 
	int m, n;
	
	for (n = 0; n<3; n++)
	{
		for (m = 0; m < 4; m++)
		{
			printf("%d\t", *(*(num+n)+m));
		}
		printf("\n");
	}
}
