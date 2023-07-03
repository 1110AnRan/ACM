#define _CRT_SECURE_NO_WARNINGS 1

//5月个人训练赛6
//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int a, b;
//		string s1, s2;
//		cin >> a >> b;
//		cin >> s1 >> s2;
//		int pos = s1.find(s2, 0);
//		if (pos != -1)
//		{
//			cout << "YES" << endl;
//		}
//		else
//		{
//			int begin1 = a - b;
//			int	begin2 = 0;
//			int count = 0;
//			int index = 0;
//			int i = 0;
//			for (begin1 = a - b; begin1 <= a - b + 1; begin1++,begin2++)
//			{
//				if (s1[begin1] != s2[begin2])
//				{
//					index = begin2;
//					count++;
//				}
//			}
//			if (count == 2)
//			{
//				cout << "NO" << endl;
//			}
//			else
//			{
//				for (i = 0; i < a - b; i++)
//				{
//					if (s1[i] == s2[index])
//					{
//						cout << "YES" << endl;
//						break;
//					}
//				}
//				if (i == a - b)
//				{
//					cout << "No" << endl;
//				}
//			}
//		}
//	}
//	return 0;
//}

//B - 2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int arr[2][2];
//		int tmp = 0;
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 2; j++)
//			{
//				cin >> arr[i][j];
//				if (arr[i][j] == 1)
//				{
//					tmp++;
//				}
//			}
//		}
//		if (tmp == 0)
//		{
//			cout << 0 << endl;
//		}
//		else if (tmp == 1 || tmp == 2 || tmp == 3)
//		{
//			cout << 1 << endl;
//		}
//		else
//		{
//			cout << 2 << endl;
//		}
//	}
//	return 0;
//}

//D-4
//#include<bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//int main() {
//	int t;
//	cin >> t;
//	while (t--) 
//	{
//		ll n;
//		cin >> n;
//		if (n & 1 || n < 4) 
//		{ 
//			cout << -1 << endl;
//			continue;
//		}
//		n /= 2;
//		cout << (n + 2) / 3 << " " << n / 2 << endl;
//
//	}
//}


//E - 5
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		if (s2.size() == 1)
		{
			if (s2 != "a")
			{
				cout << s1.size() + 1 << endl;
			}
			else
			{
				cout << 1 << endl;
			}
		}
		else
		{
			int pos = s2.find(!'a', 0);
			if (pos == -1)
			{
				cout << 1 << endl;
			}
			else
			{
				int pos1 = s2.find('a', 0);
				if (pos1 != 1)
				{
					cout << -1 << endl;
				}
				else
				{
					cout << s1.size() + 1 << endl;
				}
			}
		}
	}

	return 0;
}