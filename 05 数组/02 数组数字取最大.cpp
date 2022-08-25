#include<iostream>
using namespace std;

int main2()
{
	//在存有5个数字的数组中取最大值

	int arr[5];
	int max = 0;
	cout << "给该容量为5的数组赋值：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	max = arr[0];

	for (int j = 1; j < 5; j++)
	{
		
		if (arr[j] > max) {
			max = arr[j];
		}
		
	}

	cout << max << endl;

	return 0;
}