#include <stdio.h>
#include <ctype.h>

int main() {

  char questions[][100] = {"What is the largest planet in the solar system?",
                           "What is Eulers number?",
                           "What planet has the most moons?"};
  char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune\n",
                         "A. 3.14\nB. 1.618\nC. 2.71\nD. 9.41\n",
                         "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n"};
  char answerKey[] = {'A', 'C', 'D'}; 
  int questionCount = sizeof(questions)/sizeof(questions[1]);
  char guess = '\0';
  int score = 0;

  for(int i = 0; i < questionCount; i++){
    printf("%s\n", questions[i]);
    printf("\n%s\n", options[i]);
    printf("Enter your choise: "); 
    scanf(" %c", &guess);
    guess = toupper(guess);

    if(guess == answerKey[i]){
      printf("CORRECT!\n");
      score++;
    }
    else{
      printf("WRONG!\n");
    }
 }
  printf("\nYour score is %d out of %d points\n", score, questionCount);
  return 0;
}
