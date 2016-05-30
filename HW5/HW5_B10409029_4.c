# include <stdlib.h>
# include <stdio.h>

int main()
{
	char string[100], key[1];
	printf("Please input the string: ");
	gets(string);
	
	printf("Please input the key: ");
	key[0] = getchar();
	
	int i, count = 0, len = 0;
	for (i = 0; string[i] != '\0'; i++)
	{
		len++;
		if (key[0] == string[i])
			count++;	
	}

	printf("%c 出現次數: %d\n", key[0], count);
	printf("總字元數: %d", len);
	
	return 0;
}
