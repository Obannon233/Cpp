#include<iostream>
using namespace std;

int main()
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	cout << "��ά����arrռ�ÿռ䣺" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�ÿռ䣺" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ�ÿռ䣺" << sizeof(arr[0][0]) << endl;
	
	//��ַ
	cout << "��ά�����׵�ַ" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַ" << (int)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַ" << (int)arr[1] << endl;
	cout << "��ά�����һ��Ԫ�ص�ַ" << (int)&arr[0][0] << endl;

	return 0;

}