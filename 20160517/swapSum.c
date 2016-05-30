/* prog10_10, 盢a籔bが传(タ絋絛ㄒ) */
#include <stdio.h> 
#include <stdlib.h>
float swapSum(float *,float *,float *);   /* ㄧ计swap() */
int main(void)
{
   float a=5.8,b=20.5,c=46.2, tmp;
   printf("ユ传玡... ");
   printf("a=%.2f,b=%.2f, c=%.2f\n",a,b,c);
   tmp = swapSum(&a,&b,&c);      /* ㊣swap()ㄧ计,肚a籔b */
   
   printf("ユ传... ");
   printf("a=%.2f,b=%.2f, c=%.2f, sum=%.2f\n" ,a,b,c,tmp);

   return 0;
}

float swapSum(float *p1,float *p2,float *p3)		/* swap()ㄧ计﹚竡 */
{
   float tmp=*p1;
   *p1=*p2;
   *p2=*p3;
   *p3=tmp;
   return  *p1+*p2+*p3;
}

