/* prog11_7, ���c�}�C���ϥ� */
#include <stdio.h>
#include <stdlib.h>
#define LEN 3

float avg_score(float []);

int main(void)
{
   struct student			/* �w�q���cdata */
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
   		
		printf("�п�J�ǥͦW��: ");
   		scanf("%s",&student[i].name);
   		fflush(stdin);
   
		printf("�п�J��妨�Z: ");
		scanf("%d", &student[i].chin);
		total += student[i].chin;
   
		printf("�п�J�^�妨�Z: ");
		scanf("%d", &student[i].eng);
		total += student[i].eng;
		
		printf("�п�J�ƾǦ��Z: ");
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

	printf("��奭��: %.2f\n", avg_score(chin_total));
	printf("�^�奭��: %.2f\n", avg_score(eng_total));
	printf("�ƾǥ���: %.2f\n", avg_score(math_total));
/*	for (i = 0; i < LEN; i++)
	{
		printf("�ǥͦW��: %s\n",student[i].name);
		printf("��妨�Z: %d\n",student[i].chin);
		printf("�^�妨�Z: %d\n",student[i].eng);
		printf("�ƾǦ��Z: %d\n",student[i].math);
		printf("������: %.2f\n",student[i].mean);
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
