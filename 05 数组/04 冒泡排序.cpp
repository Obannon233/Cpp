#include<iostream>
using namespace std;

int main4()
{
	int arr[10];
	cout << "输入10个值以进行冒泡排序：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	//冒泡排序

	for (int k = 9; k > 0; k--) {
		int flag = 0;//默认没有排序动作
		for (int j = 0; j < k; j++)
		{
			if (arr[j] >= arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1; //有排序动作
			}
			
		}
		if (flag == 0)
			break; //若一轮没有排序动作 说明已经排序好
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}