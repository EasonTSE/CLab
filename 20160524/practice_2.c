/* prog11_7, 結構陣列的使用 */
#include <stdio.h>
#include <stdlib.h>
#define LEN 3

float avg_score(float []);

int main(void)
{
   struct student			/* 定義結構data */
   {
		char name[10];
		int chin;
		int eng;
		int math;
		float mean;
   };
   
   struct student student[LEN];
   
   // input data
   int i;
   
   for (i = 0; i < LEN; i++)
   {
   		float total = 0;
   		
		printf("請輸入學生名稱: ");
   		scanf("%s",&student[i].name);
   		fflush(stdin);
   
		printf("請輸入國文成績: ");
		scanf("%d", &student[i].chin);
		total += student[i].chin;
   
		printf("請輸入英文成績: ");
		scanf("%d", &student[i].eng);
		total += student[i].eng;
		
		printf("請輸入數學成績: ");
		scanf("%d", &student[i].math);
		total += student[i].math;
				
		student[i].mean = total / 3;
   }
   
   float chin_total[LEN], eng_total[LEN], math_total[LEN];
   
   for (i = 0; i < LEN; i++)
   {
   		chin_total[i] = (float) student[i].chin;
   		eng_total[i] = (float) student[i].eng;
   		math_total[i] = (float) student[i].math;
   }

	printf("國文平均: %.2f\n", avg_score(chin_total));
	printf("英文平均: %.2f\n", avg_score(eng_total));
	printf("數學平均: %.2f\n", avg_score(math_total));
/*	for (i = 0; i < LEN; i++)
	{
		printf("學生名稱: %s\n",student[i].name);
		printf("國文成績: %d\n",student[i].chin);
		printf("英文成績: %d\n",student[i].eng);
		printf("數學成績: %d\n",student[i].math);
		printf("平均分: %.2f\n",student[i].mean);
	} */
   
   return 0;
}

float avg_score(float arr[])
{
	float sum = 0;
	int i;
	for (i = 0; i < LEN; i++)
		sum += arr[i];
	return sum / LEN;
}
