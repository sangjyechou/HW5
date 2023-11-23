#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int recursiveMaximum(int *a, int size) {
	if (size == 1)
		return a[0];
	int max = recursiveMaximum(a, size - 1);
	return
		max > a[size - 1] ?
		max : a[size - 1];
}

int main() {
	srand(time(NULL));
	int a[10];
	for (int i = 0; i < 10; i++)
		a[i] = rand() % 1000;
	for (int i = 0; i < 10; i++) 
		printf("%d ", a[i]);
	printf("\n");
	printf("max is %d\n", recursiveMaximum(a, 10));
}