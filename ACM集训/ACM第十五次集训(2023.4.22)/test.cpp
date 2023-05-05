#define _CRT_SECURE_NO_WARNINGS 1

//2023年团体程序设计天梯赛-总决赛

//L1-1 最好的文档
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Good code is its own best documentation." << endl;
//	return 0;
//}

//L1-2 什么是机器学习
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a + b - 16 << endl;
//	cout << a + b - 3 << endl;
//	cout << a + b - 1 << endl;
//	cout << a + b << endl;
//	return 0;
//}

//L1-3 程序员买包子
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int n, m, k;
//	string x;
//	cin >> n >> x >> m >> k;
//	if (k == n)
//	{
//		cout << "mei you mai " << x << " de" << endl;
//	}
//	else if (k == m)
//	{
//		cout << "kan dao le mai " << x << " de" << endl;
//	}
//	else
//	{
//		cout << "wang le zhao mai " << x << " de" << endl;
//	}
//	return 0;
//}

//L1-4 进化论
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a, b, c;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b >> c;
//		if (c == a * b)
//		{
//			cout << "Lv Yan" << endl;
//		}
//		else if (c == a + b)
//		{
//			cout << "Tu Dou" << endl;
//		}
//		else
//		{
//			cout << "zhe du shi sha ya!" << endl;
//		}
//	}
//	return 0;
//}

//L1-5 猜帽子游戏
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n, m;
//	vector<int>v1;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> m;
//		v1.push_back(m);
//	}
//	int k = 0;
//	int right = 0;
//	int falut = 0;
//	cin >> k;
//	for (int i = 0; i < k; i++)
//	{
//		right = 0;
//		falut = 0;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> m;
//			if (m == 0)
//			{
//				continue;
//			}
//			else if (m == v1[j])
//			{
//				right++;
//			}
//			else
//			{
//				falut++;
//			}
//		}
//		if (falut != 0)
//		{
//			cout << "Ai Ya" << endl;
//		}
//		else
//		{
//			if (right != 0)
//			{
//				cout << "Da Jiang!!!" << endl;
//			}
//			else
//			{
//				cout << "Ai Ya" << endl;
//			}
//		}
//	}
//	return 0;
//}

//L1-6 剪切粘贴
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string start;
//	cin >> start;
//	int n;
//	cin >> n;
//	int a, b;
//	string s1, s2;
//	while (n--)
//	{
//		cin >> a >> b >> s1 >> s2;
//		string t = start.substr(a - 1, b - a + 1);
//		start.erase(a - 1, b - a + 1);
//		int x = start.find(s1 + s2);
//		if (x == -1)
//		{
//			start += t;
//		}
//		else
//		{
//			string p = start.substr(x + s1.size());
//			start.erase(x + s1.size());
//			start = start + t + p;
//		}
//	}
//	cout << start << endl;
//	return 0;
//}

//L1-7 分寝室
//#include<iostream>
//using namespace std;
//int main()
//{
//
//	return 0;
//}

//L1-8 谁管谁叫爹
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	int na, nb, sa = 0, sb = 0;
	cin >> n;
	while (n--)
	{
		sa = 0;
		sb = 0;
		cin >> na >> nb;
		int cura = na, curb = nb;
		while (cura)
		{
			sa += cura % 10;
			cura /= 10;
		}
		while (curb)
		{
			sb += curb % 10;
			curb /= 10;
		}

		if (na % sb == 0 && nb % sa == 0)
		{
			if (na > nb)
			{
				cout << "A" << endl;
			}
			else
			{
				cout << "B" << endl;
			}
		}
		else if (na % sb == 0 && nb % sa != 0)
		{
			cout << "A" << endl;
		}
		else
		{
			cout << "B" << endl;
		}
	}
	return 0;
}