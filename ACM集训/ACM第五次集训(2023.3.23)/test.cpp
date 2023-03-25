#define _CRT_SECURE_NO_WARNINGS 1

//L1-8 矩阵A乘以B
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int Arow, Acol, Brow, Bcol;
//	cin >> Arow >> Acol;
//	int A[100][100] = { 0 };
//	int B[100][100] = { 0 };
//	int C[100][100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < Arow; i++)
//	{
//		for (j = 0; j < Acol; j++)
//		{
//			cin >> A[i][j];
//		}
//	}
//	cin >> Brow >> Bcol;
//	for (i = 0; i < Brow; i++)
//	{
//		for (j = 0; j < Bcol; j++)
//		{
//			cin >> B[i][j];
//		}
//	}
//	if (Acol != Brow)
//	{
//		cout << "Error: " << Acol << " != " << Brow << endl;
//	}
//	else
//	{
//		for (i = 0; i < Arow; i++)
//		{
//			for (j = 0; j < Bcol; j++)
//			{
//				for (k = 0; k < Brow; k++)
//				{
//					C[i][j] += A[i][k] * B[k][j];
//				}
//			}
//		}
//		cout << Arow << " " << Bcol << endl;
//		for (i = 0; i < Arow; i++)
//		{
//			for (j = 0; j < Bcol; j++)
//			{
//				cout << C[i][j];
//				if (j < Bcol - 1)
//				{
//					cout << " ";
//				}
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}

//L2-1 点赞狂魔
#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n = 0;
	string name[100];
	set<int> s;
	vector<int> vk;		//记录每个人标签出现次数平均值最小
	vector<int> v;		//记录每个人不同的标签个数
	cin >> n;
	int i = 0;
	int j = 0;
	int m = 0;
	int k = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		s.clear();
		cin >> name[i];
		cin >> k;
		for (j = 0; j < k; j++)
		{
			cin >> m;
			sum += m;
			s.insert(m);
		}
		sum /= k;
		vk.push_back(sum);
		v.push_back(s.size());
	}
	if (n >= 3)
	{
		for (i = 0; i < n; i++)
		{
			int flag = 0;
			for (j = 0; j < n - i - 1; j++)
			{
				if (v[j] > v[j + 1])
				{
					int temp = v[j];
					v[j] = v[j + 1];
					v[j + 1] = temp;
					temp = vk[j];
					vk[j] = vk[j + 1];
					vk[j + 1] = temp;
					string stemp = name[j];
					name[j] = name[j + 1];
					name[j + 1] = stemp;
					flag = 1;
				}
			}
			if (flag == 0)
			{
				break;
			}
		}
		for (i = n - 1; i > n - 3; i--)
		{
			if (v[i] == v[i - 1])
			{
				if (vk[i] > vk[i - 1])
				{
					int temp = v[i];
					v[i] = v[i - 1];
					v[i - 1] = temp;
					temp = vk[i];
					vk[i] = vk[i - 1];
					vk[i - 1] = temp;
					string stemp = name[i];
					name[i] = name[i - 1];
					name[i - 1] = stemp;

				}
			}
		}
		for (i = n - 1; i >= n - 3; i--)
		{
			cout << name[i];
			if (i > n - 3)
			{
				cout << " ";
			}
		}
	}
	else if (n == 1)
	{
		cout << name[0] << " - -" << endl;
	}
	else
	{

	}
	return 0;
}

//L1-6 整出光棍
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x = 0;
//	cin >> x;
//	int s = 1;
//	int count = 0;
//	int m = s;
//	while (m % x != 0)
//	{
//		m = s + m * 10;
//		count++;
//	}
//	cout << m / x << " " << count << endl;
//	return 0;
//}
