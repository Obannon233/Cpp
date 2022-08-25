#include<iostream>
using namespace std;

int main()
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	cout << "二维数组arr占用空间：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用空间：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用空间：" << sizeof(arr[0][0]) << endl;
	
	//地址
	cout << "二维数组首地址" << (int)arr << endl;
	cout << "二维数组第一行首地址" << (int)arr[0] << endl;
	cout << "二维数组第二行首地址" << (int)arr[1] << endl;
	cout << "二维数组第一个元素地址" << (int)&arr[0][0] << endl;

	return 0;

}