// Author: Dylan Ding dvd5567@psu.edu
// Collaborator: Eric Wang evw5332@psu.edu
// Collaborator: Matthew Nagle men5266@psu.edu
// Collaborator:Ryan Morgan rkm5607@psu.edu
// Section: 7
// Breakout: 1

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(unsigned int n){
  if(n == 0){
    return 0;
  }
  return n + sum_n(n - 1);
}

void print_n(const char *s, int n){
  if (n == 0){
		return;
  }
	printf("%s\n", s); 
	print_n(s, n-1); 
}

int main(void) {
  char * n_str = readline("Enter an int: ");
  int n = atoi(n_str);
  printf("sum is %i.\n", sum_n(n));
  char *s = readline("Enter a string: ");
  print_n(s, n);
}
