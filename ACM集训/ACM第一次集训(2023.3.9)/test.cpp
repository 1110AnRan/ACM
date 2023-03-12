#define _CRT_SECURE_NO_WARNINGS 1

//2016年天梯赛模拟题集
// 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr1[200];
//	int arr2[100];
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d/%d ", &arr1[2 * i], &arr1[2 * i + 1]);
//		arr2[i] = arr1[2 * i + 1];
//	}
//
//
//
//	return 0;
//}

//7-2
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[3];
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < 2 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	cout << arr[0] << "->" << arr[1] << "->" << arr[2] << endl;
//	return 0;
//}

//7-4
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int result = 1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		result = result << 1;
//	}
//	cout << "2^" << n << " = " << result << endl;
//	return 0;
//}

//7-5
//#include <iostream>
//using namespace std;
//int main()
//{
//	int sum = 1;
//	int ret = 1;
//	int N = 0;
//	cin >> N;
//	int i = 0;
//	for (i = 2; i <= N; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	cout << sum << endl;
//	return 0;
//}

//7-6
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "This is a simple problem." << endl;
//	return 0;
//}

//7-7
//#include <iostream>
//using namespace std;
//int main()
//{
//	int N = 0;
//	char c;
//	cin >> N >> c;
//	int i, j;
//	for (i = 0; i < int((N/2.0)+0.5); i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			cout << c;
//		}
//		cout << endl;
//	}
//	return 0;
//}

//7-8
#include <iostream>
using namespace std;
#define N 100
int main()
{
	int n = 0;
	scanf("%d", &n);
	getchar();
	//保存校验码m的值
	char m[11] = { '1','0','X','9','8','7','6','5','4','3','2' };

	//存放每位数上的权重
	int weigh[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	//计算z的值
	int z = 0;

	//存放n个人的身份证号码
	char person[N][19];

	//判断是否输入合法
	int flag = 1;

	//记录z值对应的m
	char record;

	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		z = 0;
		for (j = 0; j < 18; j++)
		{
			scanf("%c", &person[i][j]);
			getchar();
			if (j <= 16)
			{
				if (!(person[i][j] >= '0' && person[i][j] <= '9'))
				{
					flag = 0;
				}
				z += (person[i][j] - 48) * weigh[j];
			}
		}
		z = z / 11;
		record = m[z];
		if (record != person[i][17])
		{
			for (j = 0; j < 17; j++)
			{
				cout << person[i][j];
			}
			cout << endl;
		}
	}
	if (flag == 1)
	{
		cout << "All passed" << endl;
	}
	return 0;
}

//7-3
//#include <iostream>
//#include <string.h>
//#include <string>
//using namespace std;
//int main()
//{
//	string A;
//	string B;
//	getline(cin,A);
//	getline(cin, B);
//	int str1 = A.size();
//	int str2 = B.size();
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < str2; i++)
//	{
//		for (j = 0; j < str1; j++)
//		{
//			if (A[j] == B[i])
//			{
//				for (k = j; k < str1 - 1; k++)
//				{
//					A[k] = A[k + 1];
//				}
//				str1--;
//			}
//		}
//	}
//	for (i = 0; i < str1; i++)
//	{
//		printf("%c", A[i]);
//	}
//	printf("\n");
//	return 0;
//}