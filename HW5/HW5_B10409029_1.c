# include <stdio.h>
# include <stdlib.h>

int main()
{
	char name[5][255];
	float sales[5];
	
	int i;
	for (i=0; i<5; i++)
	{
		printf("�п�J�P����m�W: ");
		scanf("%s", &name[i]);
		fflush(stdin);
		printf("�п�J�ӾP������q: ");
		scanf("%f", &sales[i]);
	}
	
	float max = sales[0];
	int index;
	for (i=1; i<=5; i++)
		if (sales[i-1] > max)
		{
			max = sales[i-1];
			index = i-1;
		}	

	printf("�̨ξP���: %s �P���B: %.2f\n", name[index], sales[index]);
	
	return 0;
}
