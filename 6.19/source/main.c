#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 36000

int main()
{
	int dice1[size], dice2[size],j=0;
	printf("\tdice1\tdice2");
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++)
	{
		dice1[i] = rand() % 6+1;
		dice2[i] = rand() % 6+1;
		printf("%d\t%d\t%d\n",i+1, dice1[i], dice2[i]);
		if (dice1[i] + dice2[i] == 7 )
		{
			j = j + 1;
		}
	}
	printf("7 appeared %d times", j);
	system("pause");
	return 0;
}