// BinarySearch.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
int BinarySearch(int *a, int n, int value) {
	int low = 0;
	int high = n - 1;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (a[mid] == value) {
			return mid;
		}else if(a[mid] > value) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	return -1;
}

int bSearchInternally(int *a, int low, int high, int value)
{
	if (low > high)
		return -1;

	int mid = low + ((high - low) >> 1);
	if (a[mid] == value) {
		return mid;
	}
	else if (a[mid] < value) {
		return bSearchInternally(a, mid + 1, high, value);
	}
	else {
		return bSearchInternally(a, low, high - 1, value);
	}
}

int bSearch(int *a, int n, int val) {
	return bSearchInternally(a, 0, n - 1, val);
}

//查找第一个值等于给定值的元素
int  bFirstSearch(int *a, int n, int value)
{
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = low + ((high - low) >> 1);
		if (a[mid] > value) {
			high = mid - 1;
		}
		else if(a[mid] < value) {
			low = mid + 1;
		}
		else {
			if ((mid == 0) || (a[mid - 1] != value))
				return mid;
			else
				high = mid - 1;
		}
	}

	return -1;
}

//查找最后一个值等于给定值的元素
int bEndSearch(int *a, int n, int value) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int  mid = low + ((high - low) >> 1);
		if (a[mid] > value) {
			low = mid + 1;
		}
		else if (a[mid] < value) {
			high = mid + 1;
		}
		else {
			if (mid == n - 1 || a[mid + 1] != value) {
				return mid;
			}
			else
			{
				low = mid + 1;
			}
		}

	}
	return -1;
}

//查找第一个大于等于给定值的元素
int bFirstBigSearch(int *a, int n, int value) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = low + ((high - low) >> 1);
		if (a[mid] >= value)
		{
			if (mid == 0 || a[mid - 1] < value) {
				return mid;
			}
			else {
				high = mid - 1;
			}
		}
		else {
			low = mid + 1;
		}
	}

	return -1;
}

//查找最后一个小于等于给定值的元素
int bEndBigSearch(int *a, int n, int value) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = low + ((high - low) >> 1);
		if (a[mid] <= value)
		{
			if (mid == n - 1 || a[mid + 1] > value) {
				return mid;
			}
			else {
				low = mid + 1;
			}
		}
		else {
			high = mid - 1;
		}
	}

	return -1;
}


int main()
{
	int a[6] = { 1, 3, 5, 7, 9, 11 };
	int find1 = BinarySearch(a, 6, 11);
	int find2 = bSearch(a, 6, 11);

	std::cout << find1 << std::endl;
	std::cout << find2 << std::endl;

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
