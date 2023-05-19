#define _CRT_SECURE_NO_WARNINGS 1

// 5月个人训练赛1

//A-1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if (n != 2 && n % 2 == 0)
//	{
//		cout << "YES" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//	return 0;
//}

//B-2
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int max = fmax(a, b);
//	if (max == 1)
//	{
//		cout << "1/1" << endl;
//	}
//	else if (max == 6)
//	{
//		cout << "1/6" << endl;
//	}
//	else
//	{
//		int c = 6 - max + 1;
//		int d = 6;
//		int e = c;
//		int r = 1;
//		while (r)
//		{
//			r = e % d;
//			e = d;
//			d = r;
//		}
//		cout << c / e << "/" << 6 / e << endl;
//	}
//	return 0;
//}

//C-3
//#include <iostream>
//#include<algorithm>
//#include<cstdio>
//#include <cstring>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int n, m, i, d, a[100000], c = 0;
//	scanf("%d%d", &n, &d);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		if (a[i] >= a[i + 1])
//		{
//			m = (a[i] - a[i + 1]) / d;
//			m++;
//			c += m;
//			a[i + 1] += m * d;
//		}
//	}
//	printf("%d\n", c);
//	return 0;
//}

//D-4
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s[3];
//	cin >> s[0] >> s[1] >> s[2];
//	if (s[0] == "rock")
//	{
//		if (s[1] == s[2] && s[1] == "scissors")
//		{
//			cout << "F" << endl;
//		}
//		else
//		{
//			if (s[1] == "rock")
//			{
//				if (s[2] == "paper")
//				{
//					cout << "S" << endl;
//				}
//				else
//				{
//					cout << "?" << endl;
//				}
//			}
//			else if (s[1] == "paper")
//			{
//				if (s[2] == "rock")
//				{
//					cout << "M" << endl;
//				}
//				else
//				{
//					cout << "?" << endl;
//				}
//			}
//			else
//			{
//				cout << "?" << endl;
//			}
//		}
//	}
//	else if (s[0] == "paper")
//	{
//		if (s[1] == s[2] && s[1] == "rock")
//		{
//			cout << "F" << endl;
//		}
//		else
//		{
//			if (s[1] == "paper")
//			{
//				if (s[2] == "scissors")
//				{
//					cout << "S" << endl;
//				}
//				else
//				{
//					cout << "?" << endl;
//				}
//			}
//			else if (s[1] == "scissors")
//			{
//				if (s[2] == "paper")
//				{
//					cout << "M" << endl;
//				}
//				else
//				{
//					cout << "?" << endl;
//				}
//			}
//			else
//			{
//				cout << "?" << endl;
//			}
//		}
//	}
//	else //scissors
//	{
//		if (s[1] == s[2] && s[1] == "paper")
//		{
//			cout << "F" << endl;
//		}
//		else
//		{
//			if (s[1] == "scissors")
//			{
//				if (s[2] == "rock")
//				{
//					cout << "S" << endl;
//				}
//				else
//				{
//					cout << "?" << endl;
//				}
//			}
//			else if (s[1] == "rock")
//			{
//				if (s[2] == "scissors")
//				{
//					cout << "M" << endl;
//				}
//				else
//				{
//					cout << "?" << endl;
//				}
//			}
//			else
//			{
//				cout << "?" << endl;
//			}
//		}
//	}
//	return 0;
//}

//E-5


//F-6
//#include<iostream>
//#include<string>
//using namespace std;s
//int main()
//{
//	string s;
//	cin >> s;
//	int findh = s.find('h', 0);
//	int finde = s.find('e', findh);
//	int findo = s.rfind('o', s.size() - 1);
//	int i = 0;
//	int countl = 0;
//	for (i = finde + 1; i < findo; i++)
//	{
//		if (s[i] == 'l')
//		{
//			countl++;
//		}
//	}
//	if (findh != -1 && finde != -1 && findo != -1 && finde < findo && countl >= 2)
//	{
//		cout << "YES" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//	return 0;
//}

//G-7
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int d, sumtime;
//	cin >> d >> sumtime;
//	vector<int>v;
//	int i = 0;
//	int a, b;
//	int sumab = 0;
//	int c = sumtime;
//	for (i = 0; i < d; i++)
//	{
//		cin >> a >> b;
//		if (c == 0)
//		{
//			v.push_back(a);
//		}
//		else
//		{
//			sumtime = sumtime - b;
//			sumab += b;
//			if (sumtime <= 0)
//			{
//				if (sumtime + b < 0)
//				{
//					v.push_back(a);
//				}
//				else
//				{
//					v.push_back(sumtime + b);
//				}
//			}
//			else
//			{
//				v.push_back(b);
//			}
//		}
//	}
//	if (c == 0)
//	{
//		cout << "YES" << endl;
//		for (auto & i : v)
//		{
//			cout << i << " ";
//		}
//	}
//	else
//	{
//		if (sumab >= c)
//		{
//			cout << "YES" << endl;
//			for (auto& i : v)
//			{
//				cout << i << " ";
//			}
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//	return 0;
//}