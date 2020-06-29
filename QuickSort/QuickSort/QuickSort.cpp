// QuickSort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int partition(int *a, int p, int r)
{
	int pivot = a[r];
	int i = p;
	for (int j = p; j <= r - 1; j++) {
		if (a[j] < pivot) {
			int temp = a[j];
			a[j] = a[i];
			a[i] = temp;
			++i;
		}
	}
	int temp = a[i];
	a[i] = a[r];
	a[r] = temp;
	return i;
}
void quick_sort_c(int *a, int p, int r)
{
	if (p >= r)
		return;

	int i = partition(a, p, r);
	quick_sort_c(a, p, i - 1);
	quick_sort_c(a, i + 1, r);
}

void quick_sort(int *a, int n) {
	quick_sort_c(a, 0, n - 1);
}
int main()
{
	int a[5] = { 5,3,6,1,2 };
	quick_sort(a, 5);
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;
    std::cout << "Hello World!\n";
	system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
