/*
 ============================================================================
 Name        : recursion.c
 Description : Recursive function calls, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
 if (n == 0)
  return 0;
 else if (n == 1)
  return 1;
 else{
  return fibonacci(n -1) + fibonacci(n -2);
 }
}
void generateFibonacci(int numbers){
 int n = 0;
 int i;
 for(i = 0; i < numbers ; i++){
  printf("[%d] : [%d]\n", n, fibonacci(n));
  n++;
 }
}

int main(void) {
 generateFibonacci(25);
 return EXIT_SUCCESS;
}


