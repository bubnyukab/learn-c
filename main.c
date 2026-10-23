#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int main() {

  // Reverse a string in C

  char word[] = "I DID IT!";
  int len = sizeof(word) - 2;
  char temp = '\0';

  for (int i = 0; i < len / 2; i++) {
    temp = word[len - i];
    word[len - i] = word[i];
    word[i] = temp;
  }

  printf("%s\n", word);
  printf("%d\n", len);

  return 0;
}
