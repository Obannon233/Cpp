#include<iostream>
using namespace std;

int main4()
{
	int arr[10];
	cout << "����10��ֵ�Խ���ð������" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	//ð������

	for (int k = 9; k > 0; k--) {
		int flag = 0;//Ĭ��û��������
		for (int j = 0; j < k; j++)
		{
			if (arr[j] >= arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1; //��������
			}
			
		}
		if (flag == 0)
			break; //��һ��û�������� ˵���Ѿ������
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}