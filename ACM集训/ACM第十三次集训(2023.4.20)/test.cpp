#define _CRT_SECURE_NO_WARNINGS 1

// 2023年团体程序设计天梯赛 - 模拟赛
// L1-1 嫑废话上代码
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Talk is cheap. Show me the code." << endl;
//	return 0;
//}

// L1-2 九牛一毛
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	cout << n / 15 <<" " << n / 20 <<" " << 9 * n * 10 << endl;
//	return 0;
//}

// L1-3 小孩子才做选择，大人全都要
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int sum = a + b;
//	if (a < 0 && b < 0)
//	{
//		cout << "0 0" << endl;
//		cout << "-_-" << endl;
//	}
//	else if (a > 0 && b > 0)
//	{
//		cout << fmax(a, b) << " " << sum << endl;
//		cout << "^_^" << endl;
//	}
//	else
//	{
//		if (sum > 0)
//		{
//			cout << fmax(a, b) << " " << sum << endl;
//			cout << "T_T" << endl;
//		}
//		else
//		{
//			cout << fmax(a, b) << " 0" << endl;
//			cout << "T_T" << endl;
//		}
//	}
//	
//	return 0;
//}

// L1-6 打PTA
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string find = "PTA";
//	string s;
//	int n;
//	cin >> n;
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		getline(cin, s);
//		if (s[s.size() - 1] != '?')
//		{
//			cout << "enen" << endl;
//			continue;
//		}
//		else
//		{
//			int pos = s.find(find, 0);
//			if (pos != -1)
//			{
//				cout << "Yes!" << endl;
//			}
//			else
//			{
//				cout << "No." << endl;
//			}
//		}
//	}
//	return 0;
//}

// L1-8 随机输一次
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	int m;
//	vector<int> v;
//	string s;
//	cin >> n;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> m;
//		v.push_back(m);
//	}
//	getchar();
//	int j = 0;
//	int count = -1;
//	while (getline(cin, s))
//	{
//		if (s == "End")
//		{
//			break;
//		}
//		else
//		{
//			count++;
//			if (v[j] == count)
//			{
//				if (s == "ChuiZi")
//				{
//					cout << "JianDao" << endl;
//				}
//				else if (s == "JianDao")
//				{
//					cout << "Bu" << endl;
//				}
//				else
//				{
//					cout << "ChuiZi" << endl;
//				}
//				count = -1;
//				j++;
//				if (j == v.size())
//				{
//					j = 0;
//				}
//			}
//			else
//			{
//				if (s == "ChuiZi")
//				{
//					cout << "Bu" << endl;
//				}
//				else if (s == "Bu")
//				{
//					cout << "JianDao" << endl;
//				}
//				else if (s == "JianDao")
//				{
//					cout << "ChuiZi" << endl;
//				}
//			}
//		}
//	}
//	return 0;
//}

//L2-2 老板的作息表
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	int i = 0;
//	string a, b, c;
//	cin >> n;
//	pair<string, string> p;
//	vector<pair<string, string>>v;
//	while (n--)
//	{
//		cin >> a >> c >> b;
//		p = make_pair(a, b);
//		v.push_back(p);
//	}
//	sort(v.begin(), v.end());
//	if (v[0].first != "00:00:00")
//	{
//		cout << "00:00:00"  << " - " << v[0].first << endl;
//	}
//	for (i = 0; i < v.size() - 1; i++)
//	{
//		if (v[i].second != v[i + 1].first)
//		{
//			cout << v[i].second << " - " << v[i + 1].first << endl;
//		}
//	}
//	if (v[v.size() - 1].second != "23:59:59")
//	{
//		cout << v[v.size() - 1].second << " - " << "23:59:59" << endl;
//	}
//	return 0;
//}