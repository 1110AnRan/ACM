#define _CRT_SECURE_NO_WARNINGS 1

//A-1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n;
//	while (n--)
//	{
//		cin >> m;
//		if (m % 2 == 0)
//		{
//			cout << "-1" << endl;
//		}
//		else
//		{
//			if ((m + 1) % 2 == 0)
//			{
//				int i = 0;
//				while (pow(2, i) != (m + 1))
//				{
//					i++;
//				}
//				int count = i - 1;
//				cout << count << endl;
//				while (count--)
//				{
//					cout << "2";
//					if (count >= 1)
//					{
//						cout << " ";
//					}
//				}
//				cout << endl;
//			}
//		}
//	}
//	return 0;
//}

//B - Mex Master
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int count0 = 0;
		int count1 = 0;
		int i = 0;
		int j = 0;
		vector<int> v1, v2;
		cin >> n;
		while (n--)
		{
			int m;
			cin >> m;
			if (m == 0)
			{
				count0++;
			}
			else
			{
				count1++;
			}
			v1.push_back(m);
		}
		if (count0 != 0 && count1 == 0)
		{
			cout << "1" << endl;
		}
		else if (count0 == 0 && count1 != 0)
		{
			cout << "0" << endl;
		}
		else
		{
			if (count0 > count1)
			{
				sort(v1.begin(), v1.end());
				for (i = 0; i < v1.size() - 1; i++)
				{
					if (v1[i] != 0)
					{
						break;
					}
				}
				swap(v1[i - 1], v1[i]);
				v2.resize(n + 1, 0);
				for (i = 0; i < v1.size() - 1; i++)
				{
					v2[v1[i] + v1[i + 1]]++;
				}
				for (i = 0; i < v2.size(); i++)
				{
					if (v2[i] == 0)
					{
						cout << i << endl;
						break;
					}
				}
			}
			else
			{
				cout << "0" << endl;
			}
		}

	}
	return 0;
}

//D - Save the Magazines
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	int t, n, m;
//	string s;
//	cin >> t;
//	while (t--)
//	{
//		vector<int> v1, v2, v3;
//		int count = 0;
//		cin >> n;
//		getchar();
//		cin >> s;
//		while (n--)
//		{
//			cin >> m;
//			v1.push_back(m);
//		}
//		int i = 0;
//
//	}
//	return 0;
//}

//E - 联赛规则
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int t, n, x, y;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> x >> y;
//		vector<int> v1;
//		v1.resize(n + 1, 0);
//		int max = fmax(x, y);
//		int min = fmin(x, y);
//		int count = 0;
//		int i = 0;
//		int j = 0;
//		int index = 1;
//		if (min == 0)
//		{
//			if (max == 0)
//			{
//				cout << "-1" << endl;
//				continue;
//			}
//			else if ((n - 1) % max != 0)
//			{
//				cout << "-1" << endl;
//				continue;
//			}
//			else
//			{
//				for (i = 0; i < (n - 1) / max; i++)
//				{
//					for (j = 0; j < max; j++)
//					{
//						cout << index;
//						if (i != (n - 1) / max - 1 || j != max - 1)
//						{
//							cout << " ";
//						}
//					}
//					index += max + 1;
//				}
//			}
//		}
//		else
//		{
//			cout << "-1" << endl;
//		}
//	}
//	return 0;
//}

