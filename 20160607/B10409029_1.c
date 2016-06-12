#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc==4)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[3]);
		char oper = *argv[2];
		
		switch (oper)
		{
			case '+':
				printf("%d", n1+n2);
				break;
			case '-':
				printf("%d", n1-n2);
				break;
			case '*':
				printf("%d", n1*n2);
				break;
			case '/':
				printf("%f", (float)n1/(float)n2);
				break;
			case '%':
				printf("%d", n1%n2);
				break;
			default:
				printf("Invalid operator!");
				break;
		}
		return 0;		
	}	
}
