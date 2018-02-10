#include <stdlib.h> 
#include <stdio.h>

int *alloc_1d(int cols)
{
  int* arr = (int*) malloc(cols * sizeof(int));
  return arr;
}

void alloc_1d_example(void)
{
	int *my_array = alloc_1d(12);
	my_array[8] = 3490;
	*(my_array+8) = 3490;
	printf("my_array[8] = %d\n", my_array[8]);
}

int main() {
  alloc_1d_example();
  return 0;
}