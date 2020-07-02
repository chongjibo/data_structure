// BucketSort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <list>

using namespace std;
void insert(list<int> &bucket, int value)
{
	auto iter = bucket.begin();
	while (iter != bucket.end() && value >= *iter)
		++iter;
	//iter之前插入数据
	bucket.insert(iter, value);
}
void bucketSort(vector<int> &arr)
{
	int len = arr.size();
	if (len <= 1)
		return;
	int min = arr[0], max = min;
	for (int i = 1; i < len; ++i) {
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	int k = 10;//数字之间的间隔
	int bucketsNum = (max - min) / k + 1;
	vector<list<int>> buckets(bucketsNum);
	for (int i = 0; i < len; ++i) {
		int value = arr[i];
		//(value - min) / k 在哪个桶里
		insert(buckets[(value - min) / k], value);
	}
	int index = 0;
	for (int i = 0; i < bucketsNum; i++) {
		if (buckets[i].size()) {
			for (auto &value : buckets[i])
			{
				arr[index++] = value;
			}
		}
	}

}
int main()
{
	vector<int> A = { -100,13,14,94,33,82,25,59,94,65,23,45,27,43,25,39,10,35,54,90,-200,58 };
	for (auto value : A)
		cout << value << " ";
	cout << endl;
	bucketSort(A);

	for (auto value : A)
		cout << value << " ";
	cout << endl;

	return 0;

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
