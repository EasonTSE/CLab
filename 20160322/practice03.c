/* prog7_5, �L�a�j�骺���� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch;
   while((ch!='N')||(ch!='n'))			/* ����U���䤣�OCtrl+q�� */
   {
       ch=getch();			/* �q��L���o�r�� */
       printf("ASCII of %c=%d\n",ch,ch);	/* �L�X���o�r����ASCII�X */
   }
   printf("�z�w���FCtrl+q...\n");

   system("pause");
   return 0;
}
