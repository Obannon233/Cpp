#include<iostream>
using namespace std;

int main2()
{
	//�ڴ���5�����ֵ�������ȡ���ֵ

	int arr[5];
	int max = 0;
	cout << "��������Ϊ5�����鸳ֵ��" << endl;
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