#include <stdio.h>

int main() {
  // WRITE A FILE

  FILE *pFile = fopen("output.txt", "w");

  char text[] = "BOOTY BOOTY BOOTY\nROCKIN' EVERYWHERE!";

  if (pFile == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  fprintf(pFile, "%s", text);

  printf("File was written successfully!");

  fclose(pFile);

  return 0;
}
