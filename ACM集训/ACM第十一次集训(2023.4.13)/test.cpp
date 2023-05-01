#define _CRT_SECURE_NO_WARNINGS 1

//L1-1今天我要赢
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "I'm gonna win! Today!" << endl;
//	cout << "2022-04-23" << endl;
//	return 0;
//}

//L1-2种钻石
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, v;
//	cin >> n >> v;
//	cout << n / v << endl;
//	return 0;
//}

//L1-3谁能进图书馆
//#include<iostream>
//using namespace std;
//typedef struct Person
//{
//	int id;
//	int age;
//}Person;
//int main()
//{
//	int a, b;
//	Person p[3];
//	cin >> a >> b >> p[1].age >> p[2].age;
//	p[1].id = 1;
//	p[2].id = 2;
//	if (p[1].age > p[2].age)
//	{
//		if (p[1].age < a)
//		{
//			cout << p[1].age << "-N " << p[2].age << "-N" << endl;
//			cout << "zhang da zai lai ba" << endl;
//		}
//		else if (p[1].age >= a && p[2].age >= a)
//		{
//			cout << p[1].age << "-Y " << p[2].age << "-Y" << endl;
//			cout << "huan ying ru guan" << endl;
//		}
//		else if (p[1].age >= b && p[2].age < a)
//		{
//			cout << p[1].age << "-Y " << p[2].age << "-Y" << endl;
//			cout << "qing 1 zhao gu hao 2" << endl;
//		}
//		else
//		{
//			cout << p[1].age << "-Y " << p[2].age << "-N" << endl;
//			cout << "1: huan ying ru guan" << endl;
//		}
//	}
//	else
//	{
//		if (p[2].age < a)
//		{
//			cout << p[1].age << "-N " << p[2].age << "-N" << endl;
//			cout << "zhang da zai lai ba" << endl;
//		}
//		else if (p[2].age >= a && p[1].age >= a)
//		{
//			cout << p[1].age << "-Y " << p[2].age << "-Y" << endl;
//			cout << "huan ying ru guan" << endl;
//		}
//		else if (p[2].age >= b && p[1].age < a)
//		{
//			cout << p[1].age << "-Y " << p[2].age << "-Y" << endl;
//			cout << "qing 2 zhao gu hao 1" << endl;
//		}
//		else
//		{
//			cout << p[1].age << "-N " << p[2].age << "-Y" << endl;
//			cout << "2: huan ying ru guan" << endl;
//		}
//	}
//	return 0;
//}

//L1-4拯救外星人
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int sum = 1;
//	for (int i = 2; i <= a + b; i++)
//	{
//		sum *= i;
//	}
//	cout << sum << endl;
//	return 0;
//}

//L1-5 试试手气
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[6];
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		cin >> arr[i];
//	}
//	int n = 0;
//	cin >> n;
//	for (i = 0; i < 6; i++)
//	{
//		if (arr[i] > 6 - n)
//		{
//			cout << 6 - n;
//		}
//		else
//		{
//			cout << 6 - n + 1;
//		}
//		if (i < 5)
//		{
//			cout << " ";
//		}
//	}
//	cout << endl;
//	return 0;
//}

//L1-6斯德哥尔摩火车上的题
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string cur1;
//	string next1 = "";
//	cin >> cur1;
//	int i = 0;
//	for (i = 1; i < cur1.size(); i++)
//	{
//		if (cur1[i] % 2 == cur1[i - 1] % 2)
//		{
//			next1 += max(cur1[i], cur1[i - 1]);
//		}
//	}
//	string cur2;
//	string next2 = "";
//	cin >> cur2;
//	for (i = 1; i < cur2.size(); i++)
//	{
//		if (cur2[i] % 2 == cur2[i - 1] % 2)
//		{
//			next2 += max(cur2[i], cur2[i - 1]);
//		}
//	}
//	if (next1 == next2)
//	{
//		cout << next1 << endl;
//	}
//	else
//	{
//		cout << next1 << endl;
//		cout << next2 << endl;
//	}
//	return 0;
//}

//L1-7机工士姆斯塔迪奥
//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	int n, m, q;
//	cin >> n >> m >> q;
//	int arrr[100001] = { 0 };
//	int arrc[100001] = { 0 };
//	int t, c;
//	int i = 0;
//	int countr = 0;
//	int countc = 0;
//	int sum = n * m;
//	for (i = 0; i < q; i++)
//	{
//		cin >> t >> c;
//		if (t == 0 && arrr[c] || t == 1 && arrc[c])
//		{
//			continue;
//		}
//		if (t == 0)
//		{
//			if (arrr[c] == 0)
//			{
//				countr++;
//				arrr[c] = 1;
//			}
//		}
//		else
//		{
//			if (arrc[c] == 0)
//			{
//				countc++;
//				arrc[c] = 1;
//			}
//		}
//	}
//	cout << sum - (m * countr) - (n * countc) + countr * countc << endl;
//	return 0;
//}

//L1 -8静静的推荐
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n, k, s;
//	vector<pair<int, int>> v;
//	cin >> n >> k >> s;
//	int i = 0;
//	int id, score;
//	for (i = 0; i < n; i++)
//	{
//		cin >> id >> score;
//		v[i].first = id;
//		v[i].second = score;
//	}
//
//	return 0;
//}

//L2-2 老板的作息表
//#include<iostream>
//#include<algorithm>
//using namespace std;
//typedef struct Time
//{
//	int hh;
//	int mm;
//	int ss;
//}Time;
//bool cmphh(Time t1, Time t2)
//{
//	if (t1.hh < t2.hh)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//bool cmpmm(Time t1, Time t2)
//{
//	if (t1.hh == t2.hh)
//	{
//		if (t1.mm < t2.mm)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	else
//	{
//		return false;
//	}
//}
//bool cmpss(Time t1, Time t2)
//{
//	if (t1.hh == t2.hh && t1.mm == t2.mm)
//	{
//		if (t1.ss < t2.ss)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	Time t[10000];
//	memset(t, 0, sizeof(t));
//	int n;
//	cin >> n;
//	if (n == 0)
//	{
//		printf("00:00:00 - 23:59:59");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 2 * n; i += 2)
//		{
//			scanf("%d:%d:%d - %d:%d:%d", &t[i].hh, &t[i].mm, &t[i].ss, &t[i + 1].hh, &t[i + 1].mm, &t[i + 1].ss);
//		}
//		sort(t, t + n * 2, cmphh);
//		sort(t, t + n * 2, cmpmm);
//		sort(t, t + n * 2, cmpss);
//		if (t[0].hh != 0 || t[0].mm != 0 || t[i].ss != 0)
//		{
//			printf("00:00:00 - %02d:%02d:%02d\n", t[0].hh, t[0].mm, t[0].ss);
//		}
//		for (i = 1; i < 2 * n - 1; i += 2)
//		{
//			if (t[i].hh != t[i + 1].hh || t[i].mm != t[i + 1].mm || t[i].ss != t[i + 1].ss)
//			{
//				printf("%02d:%02d:%02d - %02d:%02d:%02d\n", t[i].hh, t[i].mm, t[i].ss, t[i + 1].hh, t[i + 1].mm, t[i + 1].ss);
//			}
//		}
//		if (t[i].hh != 23 || t[i].mm != 59 || t[i].ss != 59)
//		{
//			printf("%02d:%02d:%02d - 23:59:59\n", t[i].hh, t[i].mm, t[i].ss);
//		}
//	}
//	return 0;
//}