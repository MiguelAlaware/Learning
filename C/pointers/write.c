#include <stdio.h>

int main(){

  FILE *pFile = fopen("output.txt", "w");
 
  char text[] = "Unser Liebe Fraue\nVon kalten Bronnen";

  if(pFile == NULL){
    printf("ERROR OPENING FILE\n");
    return 1;
  }

  fprintf(pFile, "%s\n", text);

  printf("File was written successfully\n");

  fclose(pFile);
  return 0;
}
