# include <stdlib.h>
# include <stdio.h>

float day_avg(float arr[]);

int main()
{
	int i,j;
	float a[3][4] = {
		{18.2, 17.3, 15.0, 13.4},
		{23.8, 25.1, 20.6, 17.8},
		{20.6, 21.5, 18.4 ,15.7}
	};
	
	printf("\t");
	for (i=1;i<=4;i++)
		printf("星期%d\t",i);
		
	printf("\n");
	
	for (i=0;i<3;i++)
	{
		printf("時段%d\t",i+1);
		for (j=0;j<4;j++)
			printf("%.2f\t",a[i][j]);
		printf("\n");
	}
	
	float b[4][3];
	
	printf("每天平均溫度:\n");
	for (i=0; i<3; i++)
		printf("%.2f度\n", day_avg())
	
	
	for (i=0; i<3; i++)
	{
		printf("星期%d:\t",i+1);
		printf("%.2f度\n",a[i]);
	}
}

float day_avg(float arr[])
{
	int i;
	int len = sizeof(arr[]) / sizeof(float);
	float sum = 0;
	
	for (i=0; i<len; i++)
		sum += arr[i];
		
	return sum / 3;
}
