#include<iostream>
using namespace std;

int main1()
{
	//���������÷�

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//ռ���ڴ��С
	cout << "��������ռ�ÿռ䣺"<< sizeof(arr) << endl;
	cout << "����Ԫ��ռ�ÿռ䣺" << sizeof(arr[0]) << endl;
	cout << "����Ԫ�ظ�����" << sizeof(arr) / sizeof(arr[0]) << endl;

	//�����ַ int��16���Ƶ�ַתΪ10���� &��ʾ��ַ
	cout << "�����׵�ַ��" << (int)arr << endl;
	cout << "��һ��Ԫ�ص�ַ: " << (int)&arr[0] << endl;
	cout << "�ڶ���Ԫ�ص�ַ: " << (int)&arr[1] << endl;

	// arr = 100; ���������ܸ�ֵ

	return 0;
	
}