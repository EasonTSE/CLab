# include <stdio.h>
# include <stdlib.h>

int main()
{
	int num,n,i,psum = 0,sum = 0;
	printf("�п�J�@�ӥ����: ");
	scanf("%d",&num);

	printf("�p�� %d �������ƥ]�A�G", num);
	for (i = 1; i <= num; i++)
	{
		for (n = 1; n < i; n++)
			if (i % n == 0)
				sum += n;

		if (sum == i)
		{
			printf("%d ", sum);
			psum += sum;
		}

		sum = 0;
	}

	printf("\n�Ҧ��yPerfect Number�z���`�M���G%d\n", psum);

	return 0;
}
