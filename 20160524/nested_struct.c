/* prog11_7, 結構陣列的使用 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i;
	struct date
	{
		int month;
		int day;
	};
   
   struct student			/* 定義結構data */
   {
		char name[10];
		struct date birthday;
   };
   
   struct student student1;
   printf("Input student name: ");
   gets(student1.name);
   
   printf("Input student birthday: ");
   scanf("%d %d", &student1.birthday.month, &student1.birthday.day);
   
   printf("Student Name: %s\n", student1.name);
   printf("Student Birthday: %d / %d", student1.birthday.month, student1.birthday.day);
   
   return 0;
}

