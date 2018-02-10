#include <stdlib.h>
#include <stdio.h>

int **alloc_2d(int rows, int cols) {
  int **arr = malloc(cols * sizeof(int*));
  for (int i = 0; i < rows; i++) {
     arr[i] = malloc(cols * sizeof(int));
  }

  return arr;
}

void alloc_2d_example(void) {
	int **my_array = alloc_2d(5, 10);
	my_array[2][3] = 3490;
	*(*(my_array+2)+3) = 3490;
	printf("my_array[2][3] = %d\n", my_array[2][3]);
}

int main() {
  alloc_2d_example();
  return 0;
}