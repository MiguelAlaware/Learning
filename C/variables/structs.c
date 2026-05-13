#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
  char name[100];
  int age;
  float score;
  bool isFullTime;
}Student;

void printStudent(Student student);

int main() {

  Student student1 = {"Miguel", 19, 8.49, true};
  Student student2 = {0};

  printStudent(student1);

  return 0;
}

void printStudent(Student student){
  printf("%s\n", student.name);
  printf("%d\n", student.age);
  printf("%.2f\n", student.score);
  printf("%s\n", (student.isFullTime) ? "yes" : "no");
}
