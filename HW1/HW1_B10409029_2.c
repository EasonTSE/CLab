# include <stdio.h>
# include <stdlib.h>

int main() {

  float capital, rate, year;

  printf("請輸入本金：");
  scanf("%f", &capital);

  printf("請輸入利率：");
  scanf("%f", &rate);

  printf("請輸入預計存幾年：");
  scanf("%f", &year);

  float interest = capital*rate;
  printf("每年利息為：%2.2f\n", interest);
  printf("過%2.2f年後總金額為：%2.2f\n", year, capital+year*interest);

  return 0;
}
