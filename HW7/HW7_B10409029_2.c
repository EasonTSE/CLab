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
      printf("�п�J���U(1)�άO�n�J(2): ");
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
        printf("�x�s�Ŷ��w���I\n");
    }
    else
    {
      char user[10];
      char pwd[10];

      printf("�п�J�b��: ");
      scanf("%s", user);
      fflush(stdin);

      printf("�п�J�K�X: ");
      scanf("%s", pwd);
      fflush(stdin);

      if (check(member, user, pwd, count) == 0)
        printf("�n�J���\�I\n");
      else
        printf("�K�X���~�I\n");
    }

    do {
      printf("�п�J�O�_�~��(1:�~��A 0:���}): ");
      scanf("%d", &action);
    } while(action < 0 || action > 1);

  } while(action != 0);

  return 0;
}

void add(struct memberdata arr[], int i)
{
  struct memberdata *ptr = arr;
  int n;

  printf("�п�J�b��: ");
  scanf("%s", (ptr+i-1)->username);
  fflush(stdin);

  printf("�п�J�K�X: ");
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

  printf("\n�@��%d��|�����\n", len);

  int i;
  for (i = 0; i < len; i++)
  {
    printf("=====�|��%d======\n", i+1);
    printf("�b��: %s\n", ptr->username);
    printf("�K�X: %s\n", ptr->password);
    ptr++;
  }
  printf("\n");
}
