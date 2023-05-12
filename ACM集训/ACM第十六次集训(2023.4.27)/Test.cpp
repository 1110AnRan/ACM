#define _CRT_SECURE_NO_WARNINGS 1

// 4月个人训练赛1

// A-1
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a;
//	string s = "Division ";
//	while (n--)
//	{
//		cin >> a;
//		if (a >= 1900)
//		{
//			cout << s << "1" << endl;
//		}
//		else if (a >= 1600 && a <= 1899)
//		{
//			cout << s << "2" << endl;
//		}
//		else if (a >= 1400 && a <= 1599)
//		{
//			cout << s << "3" << endl;
//		}
//		else
//		{
//			cout << s << "4" << endl;
//		}
//	}
//	return 0;
//}

// B-2
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int m;
//	int k = 0;
//	int i = 0;
//	vector<int> v;
//	while (n--)
//	{
//		cin >> m;
//		while (m--)
//		{
//			cin >> k;
//			v.push_back(k);
//		}
//		if (v.size() < 3)
//		{
//			cout << "-1" << endl;
//		}
//		else
//		{
//			vector<int> v1;
//			v1.resize(v.size() + 1);
//			for (i = 0; i < v.size(); i++)
//			{
//				v1[v[i]]++;
//			}
//			for (i = 0; i < v1.size(); i++)
//			{
//				if (v1[i] >= 3)
//				{
//					cout << i << endl;
//					break;
//				}
//			}
//			if (i == v1.size())
//			{
//				cout << "-1" << endl;
//			}
//		}
//		v.clear();
//	}
//	return 0;
//}

// C-3
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int m;
//	int k = 0;
//	int i = 0;
//	while (n--)
//	{
//		vector<int> v;
//		cin >> m;
//		while (m--)
//		{
//			cin >> k;
//			v.push_back(k);
//		}
//		int first = v[0] % 2;
//		int second = v[1] % 2;
//		for (i = 2; i < v.size(); i += 2)
//		{
//			if (v[i] % 2 != first)
//			{
//				cout << "NO" << endl;
//				break;
//			}
//		}
//		if (i < v.size())
//		{
//			continue;
//		}
//		for (i = 3; i < v.size(); i += 2)
//		{
//			if (v[i] % 2 != second)
//			{
//				cout << "NO" << endl;
//				break;
//			}
//		}
//		if (i < v.size())
//		{
//			continue;
//		}
//		cout << "YES" << endl;
//
//	}
//	return 0;
//}

// D-5
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	string s1;
//	cin >> s1;
//	int pos = 0;
//	int begin = 0, end = 0;
//	while (pos != -1)
//	{
//		begin = end;
//		end = s1.find('|', begin + 1);
//		pos = s1.find('|', end + 1);
//	}
//	string s2 = s1.substr(begin + 1, end - begin);
//	int count = 0;
//	for (int i = 0; i < s2.size(); i++)
//	{
//		if (s2[i] == '*')
//		{
//			count ++;
//		}
//	}
//	if (count!=0)
//	{
//		cout << "in" << endl;
//	}
//	else
//	{
//		cout << "out" << endl;
//	}
//	return 0;
//}

// E-5
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<vector<long>> v;
//	v.resize(2);
//	long n, t;
//	cin >> n >> t;
//	long a;
//	long i = 0;
//	long j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			cin >> a;
//			v[i].push_back(a);
//		}
//	}
//	pair<long, long>p;
//	vector<pair<long, long >>v1;
//	for (i = 0; i < n; i++)
//	{
//		if (v[0][i] == t)
//		{
//			p = make_pair(v[1][i], i + 1);
//			v1.push_back(p);
//		}
//	}
//	if (v1.size() == 0)
//	{
//		long max = v[1][0];
//		long maxindex = 1;
//		for (i = 1; i < n; i++)
//		{
//			if (v[1][i] > max)
//			{
//				max = v[1][i];
//				maxindex = i + 1;
//			}
//			
//		}
//		cout << maxindex << endl;
//	}
//	else
//	{
//		long max = v1[0].first;
//		long maxindex = v1[0].second;
//		for (i = 1; i < v1.size(); i++)
//		{
//			if (v1[i].first > max)
//			{
//				max = v1[i].first;
//				maxindex = v1[i].second;
//			}
//		}	
//		cout << maxindex << endl;
//	}
//	return 0;
//}
