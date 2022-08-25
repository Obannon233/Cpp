#include<iostream>
using namespace std;

int main3()
{
	int arr[5];
	int max = 0;
	cout << "给该容量为5的数组赋值：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	//打印元素
	cout << "数组内元素为: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//逆置元素
	int temp = 0;
	for (int i = 0; i < 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[4 - i];
		arr[4 - i] = temp;
	}

	cout << "逆置后数组内元素为:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}

