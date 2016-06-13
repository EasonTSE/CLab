#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct memberdata
{
  char username[10];
  char password[10];
};

void add(struct memberdata [], int);
int check(struct memberdata [], char [], char [], int);
void show_member(struct memberdata [], int);

int main(int argc, char const *argv[])
{
  int i, oper, action, count = 0, size = 5;

  struct memberdata member[size];

  do {
    do {
      printf("請輸入註冊(1)或是登入(2): ");
      scanf("%d", &oper);
      fflush(stdin);
    } while (oper < 1 || oper > 2);


    if (oper == 1)
    {
      if (count++ < size)
      {
        printf("count: %d\n", count);
        add(member, count);
        show_member(member, count);
      }
      else
        printf("儲存空間已滿！\n");
    }
    else
    {
      char user[10];
      char pwd[10];

      printf("請輸入帳號: ");
      scanf("%s", user);
      fflush(stdin);

      printf("請輸入密碼: ");
      scanf("%s", pwd);
      fflush(stdin);

      if (check(member, user, pwd, count) == 0)
        printf("登入成功！\n");
      else
        printf("密碼錯誤！\n");
    }

    do {
      printf("請輸入是否繼續(1:繼續， 0:離開): ");
      scanf("%d", &action);
    } while(action < 0 || action > 1);

  } while(action != 0);

  return 0;
}

void add(struct memberdata arr[], int i)
{
  struct memberdata *ptr = arr;
  int n;

  printf("請輸入帳號: ");
  scanf("%s", (ptr+i-1)->username);
  fflush(stdin);

  printf("請輸入密碼: ");
  scanf("%s", (ptr+i-1)->password);
  fflush(stdin);
}

int check(struct memberdata arr[], char account[], char password[], int len)
{
  struct memberdata *ptr = arr;
  int i;

  for (i = 0; i < len; i++)
    if(strcmp(account, (ptr+i)->username) == 0 && strcmp(password, (ptr+i)->password) == 0)
      return 0;

  return 1;
}

void show_member(struct memberdata arr[], int len)
{
  struct memberdata *ptr = arr;

  printf("\n共有%d位會員資料\n", len);

  int i;
  for (i = 0; i < len; i++)
  {
    printf("=====會員%d======\n", i+1);
    printf("帳號: %s\n", ptr->username);
    printf("密碼: %s\n", ptr->password);
    ptr++;
  }
  printf("\n");
}
