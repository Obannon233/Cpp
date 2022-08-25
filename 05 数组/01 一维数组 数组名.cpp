#include<iostream>
using namespace std;

int main1()
{
	//数组名的用法

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//占用内存大小
	cout << "整个数组占用空间："<< sizeof(arr) << endl;
	cout << "单个元素占用空间：" << sizeof(arr[0]) << endl;
	cout << "数组元素个数：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//数组地址 int将16进制地址转为10进制 &表示地址
	cout << "数组首地址：" << (int)arr << endl;
	cout << "第一个元素地址: " << (int)&arr[0] << endl;
	cout << "第二个元素地址: " << (int)&arr[1] << endl;

	// arr = 100; 数组名不能赋值

	return 0;
	
}