#include <stdio.h>
#include <stdlib.h>

struct data
{
	int number;
	char name[50];
};

struct scoreData
{
	struct data studentData;
	int ChineseScore;
	int EnglishScore;
	int initialTotal;
};

struct student
{
	struct scoreData stuData;
	struct student *next;
};
typedef struct student STUDENT;

STUDENT *createList(int *arr, int len);
//void printList(STUDENT *first);
int countStudent(STUDENT *first);

int main()
{
	printf("功能說明(1)新增學生資料 (2)更改學生資料 (3)刪除學生資料\n");
	printf("　　　　(4)列出各科平均成績 (5)列出所有學生資料 (6)結束\n");
	do {
		do {
			printf("請選擇功能選項: ");
			int oper = 0;
			scanf("%d", &oper);
		} while(oper < 0 || oper > 6);

    STUDENT *first = NULL;

		if (oper == 1)
		{
		}
	} while(oper != 6);
	return 0;
}

/* createList()，串列建立函數 */
STUDENT *createList(int *arr, int len)
{
	int i;
	STUDENT *first,*current,*previous;
	for(i = 0; i < len; i++)
	{
		current = (STUDENT *) malloc(sizeof(STUDENT));
		current->data = arr[i]; /* 設定節點的資料成員 */
		if(i == 0) /* 判別是否為第一個節點 */
			first = current;
		else
			previous->next = current;  /* 把前一個節點的next指向目前節點 */
		current->next = NULL;
		previous = current;
	}
	return first;
}

/*
void printList(STUDENT *first)
{
	STUDENT *STUDENT = first;
	if(first == NULL)
		printf("List is empty!\n");
	else
	{
		while(STUDENT != NULL)
		{
			printf("%3d", STUDENT->data);
			STUDENT = STUDENT->next;
		}
		printf("\n");
	}
}
*/

/* searchStudent()函數，可傳回第一個存放item之節點的位址 */
STUDENT *searchStudent(STUDENT *first, int item)
{
	STUDENT *student = first;
	while(student != NULL)
	{
		if(student->data == item) /* 如果student的data等於item */
			return student;  /* 傳回student，即該節點的位址 */
		else
			student = student->next;  /* 否則將指標指向下一個節點 */
	}
	return NULL; /* 如果找不到符合的節點，則傳回NULL */
}

/* insertStudent()，可在student之後加入一個新的節點 */
void insertStudent(STUDENT *student,int item)
{
	STUDENT *newstudent;
	newstudent = (STUDENT *) malloc(sizeof(STUDENT)); /* 取得新節點的位址 */
	newstudent->data = item; /* 將新節點的data設為item */
	newstudent->next = student->next; /* 將新節點的next設為原節點的next */
	student->next = newstudent; /* 將原節點的next指向新節點 */
}

int countStudent(STUDENT *first)
{
	struct node *temp = first;
	int length = 0;
	while(temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	return length;
}
