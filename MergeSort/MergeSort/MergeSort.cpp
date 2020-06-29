// MergeSort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
void merge(int *a, int p, int q, int r)
{
	int i = p, j = q + 1, k = 0;
	int *temp = new int[r - p + 1];
	while (i <= p && j <= r) {
		if (a[i] <= a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}
	while (i <= q)
		temp[k++] = a[i++];
	while (j <= r)
		temp[k++] = a[j++];
	for (int i = p, k = 0; i <= r; i++, k++)
		a[i] = temp[k];
	delete []temp;

}

void mergeSortC(int *a, int p, int r)
{
	if (p >= r)
		return;

	int q = (p + r) / 2;
	mergeSortC(a, p, q);
	mergeSortC(a, q + 1, r);

	merge(a, p, q, r);

}

void mergeSort(int *a, int n) 
{
	mergeSortC(a, 0, n - 1);
}

int main()
{

	int a[] = { 4, 5,3,2,6,7,1,0, 8 };
	mergeSort(a, 9);
	std::cout << a[0] << std::endl; 
	std::cout << a[1] << std::endl;
	std::cout << a[2] << std::endl;
	std::cout << a[3] << std::endl;
	std::cout << a[4] << std::endl;
	std::cout << a[5] << std::endl;
	std::cout << a[6] << std::endl;
	std::cout << a[7] << std::endl;
	std::cout << a[8] << std::endl;
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
