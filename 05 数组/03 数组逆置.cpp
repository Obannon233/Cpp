#include<iostream>
using namespace std;

int main3()
{
	int arr[5];
	int max = 0;
	cout << "��������Ϊ5�����鸳ֵ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	//��ӡԪ��
	cout << "������Ԫ��Ϊ: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//����Ԫ��
	int temp = 0;
	for (int i = 0; i < 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[4 - i];
		arr[4 - i] = temp;
	}

	cout << "���ú�������Ԫ��Ϊ:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}

