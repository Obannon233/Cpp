#include<iostream>
using namespace std;

int main5()
{
	//二维数组
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6} //这种定义最一目了然
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
	int arr3[][3] = { 1,2,3,4,5,6 };//系统自动划分

	return 0;
}