// CountingSort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
void countingSort(int *a, int n) {
	if (n <= 1)
		return;
	//查找范围
	int max = a[0];
	for (int i = 1; i < n; ++i) {
		if (max < a[i])
			max = a[i];
	}

	int *c = new int[max + 1]();
	//计算每个元素的个数，放入c中
	for (int i = 0; i < n; ++i) {
		c[a[i]]++;
	}

	//依次累加
	for (int i = 1; i <= max; ++i) {
		c[i] = c[i - 1] + c[i];
	}

	int *r = new int[n];

	for (int i = n - 1; i >= 0; i--) {
		int index = c[a[i]] - 1;
		r[index] = a[i];
		c[a[i]]--;
	}

	for (int i = 0; i < n; ++i) {
		a[i] = r[i];
	}
	
}

int main()
{
	int a[6] = { 4,1,5,3,2,6 };
	countingSort(a, 6);
	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a[2] << std::endl;
	std::cout << a[3] << std::endl;
	std::cout << a[4] << std::endl;
	std::cout << a[5] << std::endl;
    std::cout << "Hello World!\n";
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
