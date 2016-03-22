# include <stdio.h>
# include <stdlib.h>

int main() {
	char student1[20], student2[20], student3[20];
	float score1, score2, score3;

	printf("請依序輸入三位學生姓名：\n");
	scanf("%s %s %s", student1, student2, student3);

	printf("請依序輸入三位學生成績：\n");
	scanf("%f %f %f", &score1,score2,score3);

	if (score1 > score2) {
		if (score1 > score3) {
			printf("最高分的是%s，%2.2f分\n", student1, score1);
		}
		else if (score1 == score3) {
			printf("最高分的是%s及%s，%2.2f分\n", student1, student3, score1);
		}
		else if (score1 < score3) {
			printf("最高分的是%s，%2.2f分\n", student3, score1);
		}
	}
	else if (score2 > score1) {
		if (score2 > score3) {
			printf("最高分的是%s，%2.2f分\n", student2, score2);
		}
		else if (score2 == score3) {
			printf("最高分的是%s及%s，%2.2f分\n", student2, student3, score2);
		}
		else if (score2 < score3) {
			printf("最高分的是%s，%2.2f分\n", student3, score2);
		}
	}
	else if (score3 > score1) {
		
	}

}
