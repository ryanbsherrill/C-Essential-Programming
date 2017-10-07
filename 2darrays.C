#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 2
#define NUM_COLS 3

// prototype defs
void printTable(int table[][NUM_COLS]);

// main function
int main(void) {

  // initialize 2d array
  int table[NUM_ROWS][NUM_COLS] = {
    {132,142, 23},
    {  0, 76,872}
  };
  printf("Row 1 Column 2 contains %d\n", table[1][2]);
  printTable(table);
  return EXIT_SUCCESS;
}

void printTable(int table[][NUM_COLS]){
  printf("\n The table:\n");
  for (int i = 0; i < NUM_ROWS; i++) {
    for (int j = 0; j < NUM_COLS; j++) {
      printf("%4d", table[i][j]);
    }
    printf("\n");
  }
}
