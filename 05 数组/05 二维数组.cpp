#include<iostream>
using namespace std;

int main5()
{
	//��ά����
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6} //���ֶ�����һĿ��Ȼ
	};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " " ;
		}
		cout << endl;
	}

	int arr2[2][3] = { 1,2,3,4,5,6 }; 
	int arr3[][3] = { 1,2,3,4,5,6 };//ϵͳ�Զ�����

	return 0;
}