#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const* argv[])
{
	FILE* fptr;
	if (argc == 4)
	{
		fptr = fopen("health.txt","a");
		if(fptr != NULL)
		{
			int height = atoi(argv[2]);
			int weight = atoi(argv[3]);
			float bmi = (float) weight / pow((float) height / 100, 2);

			fwrite(argv[1], sizeof(char), strlen(argv[1]), fptr);
			fwrite("\t", sizeof("\t"), 1, fptr);

			fwrite(argv[2], sizeof(char), strlen(argv[2]), fptr);
			fwrite("\t", sizeof("\t"), 1, fptr);

			fwrite(argv[3], sizeof(char), strlen(argv[3]), fptr);
			fwrite("\t", sizeof("\t"), 1, fptr);

			char* status[1];

			if (bmi < 18.5)
				*status = "Underweight";
			else if (bmi == 18.5 || bmi < 24)
				*status = "Normal";
			else if (bmi == 24 || bmi < 27)
				*status = "Overweight";
			else if (bmi >= 27)
				*status = "Obese";

			fwrite(*status, sizeof(char), strlen(*status), fptr);
			fwrite("\n", sizeof("\n"), 1, fptr);
			printf("=====資料新增成功=====\n");
			printf("%s\t%s\t%s\t%s\n", argv[1], argv[2], argv[3], *status);

			printf("=====目前health.txt檔案的內容=====\n");
			fclose(fptr);
			fptr = fopen("health.txt","r");
			if(fptr != NULL)
			{
				char ch;
				while ((ch = getc(fptr)) != EOF)
					printf("%c", ch);
				fclose(fptr);
			}
			else
				printf("開啟檔案失敗!\n");
		}
		else
			printf("開啟檔案失敗!\n");

	}
	else
		printf("引數數量不符\n");
	return 0;
}
