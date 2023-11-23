#include <stdio.h>
#include <stdlib.h>

int search(int[], int, int);

int main(void)
{
	int key, ans;
	int data[] = {1,5,20,23,33,61,70,88,90};
	printf("��J���: ");
	scanf("%d", &key);
	ans = search(data, key, sizeof(data) / sizeof(int));

	if (ans < 0)
	{
		printf("�䤣�� %d\n", key);
	}
	else
	{
		printf("�b�� %d ����Ƨ�� %d\n", ans + 1, key);
	}
	system("pause");
	return 0;
}

int search(int data[], int key, int n)
{
	int low = 0, high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (data[mid] == key)
		{
			return mid;
		}
		else if (data[mid] > key)
		{
			high = mid - 1;
		}
		else if (data[mid] < key)
		{
			low = mid + 1;
		}
	}
	return -1;
}