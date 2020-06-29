//#include <cstdio>
#include <iostream>
void bubbleSort(int a[], int n) {
	if (n <= 1)
		return;
	for (int i = 0; i < n; ++i) {
		bool flag = false;
		for (int j = 0; j < n - i - 1; ++j) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = true;
			}
		}

		if (!flag)
			break;
	}
}

void bubbleSortReview(int *a, int n) 
{
	if (n < 2)
		return;
	for (int i = 0; i < n; i++) {
		bool flag = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = true;
			}
		}

		if (!flag)
			break;
	}
}

int main()
{
	int a[5] = { 6, 5, 4, 3, 2 };
	bubbleSortReview(a, 5);
	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a[2] << std::endl;
	std::cout << a[3] << std::endl;
	std::cout << a[4] << std::endl;
    printf("hello from BubbleSort!\n");
	system("pause");
    return 0;
}