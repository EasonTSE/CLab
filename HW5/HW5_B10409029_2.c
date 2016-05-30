# include <stdio.h>
# include <stdlib.h>
# define ROW 3
# define COL 4

void average(int arr[ROW][COL]);

int main()
{
	int cl[ROW][COL];
	int i, j;
	
	for (i=0; i < ROW; i++)
		for (j=0; j < COL; j++)
		{
			printf("�п�J��%d�Z��%d��P�Ǧ��Z: ", i+1,j+1);
			scanf("%d", &cl[i][j]);
			fflush(stdin);
		}
	
	average(cl);
	
	return 0;
}

void average(int arr[ROW][COL])
{
	int i, j;
	for (i=0; i < ROW; i++)
	{
		float sum = 0; 
		
		for (j=0; j < COL; j++)
			sum += arr[i][j];
		
		printf("��%d�Z������: %.2f\n", i+1, sum/COL);
	}
}
