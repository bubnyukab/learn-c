#include <stdio.h>

void birthday(int *age);

int main() {
  // Program

  // pointer = A variable that store the memory address of another variable.
  // Benefit: They help avoid wasting memory by allowing you to pass the address
  // of a large data structure instead of copying the entire data.

  int age = 25;

  birthday(&age);

  printf("You are %d years old\n", age);

  return 0;
}

void birthday(int *age) { (*age)++; }
