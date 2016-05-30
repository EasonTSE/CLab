/* prog10_11, 傳回多個數值的函數 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void circle(int, float*, float*);
int main(void)
{
	int a = 5;
	float area,peri;
	circle(a,&area,&peri);  /* 呼叫rect(),計算面積及周長 */
	printf("area=%.4f,peri=%.4f\n",area,peri);

	return 0;
}

void circle(int x, float* p1, float* p2)
{
	*p1 = x * x * M_PI;
	*p2 = 2 * x * M_PI;
}
