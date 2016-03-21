# include <stdio.h>
# include <stdlib.h>

int main() {
  char gender;
  float height, weight;

  printf("Input your gender(M/F): ");
  scanf("%s", &gender);

  printf("Input your height(cm): ");
  scanf("%f", &height);

  printf("Input your weight(kg): ");
  scanf("%f", &weight);

  float bmi = weight/(height/100*height/100);
  printf("Your BMI is %3.2f.\n", bmi);

  if (gender == 'M') {
    if (bmi > 25)
      printf("You are overweighted!\n");
    else
      printf("Good, healthy boy!\n");
  }
  else if (gender == 'F') {
    if (bmi > 20)
      printf("You are overweighted!\n");
    else
      printf("Good, healthy girl!\n");
  }
  else {
    printf("Hey, where are you from?!\n");
  }
}
