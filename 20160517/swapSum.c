/* prog10_10, �Na�Pb�Ȥ���(���T�d��) */
#include <stdio.h> 
#include <stdlib.h>
float swapSum(float *,float *,float *);   /* ���swap()�쫬���ŧi */
int main(void)
{
   float a=5.8,b=20.5,c=46.2, tmp;
   printf("�洫�e... ");
   printf("a=%.2f,b=%.2f, c=%.2f\n",a,b,c);
   tmp = swapSum(&a,&b,&c);      /* �I�sswap()���,�öǤJa�Pb����} */
   
   printf("�洫��... ");
   printf("a=%.2f,b=%.2f, c=%.2f, sum=%.2f\n" ,a,b,c,tmp);

   return 0;
}

float swapSum(float *p1,float *p2,float *p3)		/* swap()��ƪ��w�q */
{
   float tmp=*p1;
   *p1=*p2;
   *p2=*p3;
   *p3=tmp;
   return  *p1+*p2+*p3;
}

