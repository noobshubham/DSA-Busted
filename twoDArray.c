#include <stdio.h>
#include <stdlib.h>

int twoDArray() {
  printf("Hello world\n");

	// stack
  int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {3, 5, 7, 9}};

	// pointer B in stack and columns are in heap
	int *B[3];
	B[0] = (int *)malloc(4*sizeof(int));
	B[1] = (int *)malloc(4*sizeof(int));
	B[2] = (int *)malloc(4*sizeof(int));

	// all in heap
	int **C;
	C = (int **)malloc(3*sizeof(int *));
	C[0] = (int *)malloc(4*sizeof(int));
	C[1] = (int *)malloc(4*sizeof(int));
	C[2] = (int *)malloc(4*sizeof(int));

	B[1][1] = 15;
	C[1][2] = 15;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", A[i][j]);
    }
  }
	printf("\n");
	for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", B[i][j]);
    }
  }
	printf("\n");
	for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", C[i][j]);
    }
  }
	
	free(C);

  return 0;
}