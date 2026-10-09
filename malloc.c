#include <stdio.h>
#include <stdlib.h>

int main() {

  // malloc() = A function in C that dynamically
  // allocates a specified number of bytes in memory

  int number = 0;
  printf("Enter the number of grades: ");
  scanf("%d", &number);

  char *grades = malloc(number * sizeof(char));

  if (grades == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  for (int i = 0; i < number; i++) {
    printf("Enter grade #%d: ", i + 1);
    scanf(" %c", &grades[i]);
  }

  for (int i = 0; i < number; i++) {
    printf("%c ", grades[i]);
  }

  free(grades);  // returnning "rented" space back to the OS
  grades = NULL; // avoids dangling pointers (like returning the key for an
                 // apartment you rented)

  return 0;
}
