#define _CRT_SECURE_NO_WARNINGS 1

//L1-1 新世界
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Hello World" << endl;
//	cout << "Hello New World" << endl;
//	return 0;
//}

//L1-2 打折
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double a;
//	int b;
//	cin >> a >> b;
//	cout << fixed << setprecision(2) << a * b / 10 << endl;
//	return 0;
//}


//L1-3 奇偶分家
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	int count1 = 0, count2 = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> m;
//		if (m % 2 == 0)
//		{
//			count2++;
//		}
//		else
//		{
//			count1++;
//		}
//	}
//	cout << count1 << " " << count2 << endl;
//	return 0;
//}

//L1-4 冠军魔术
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	for (int i = 0; i < b / 2; i++)
//	{
//		a *= 2;
//	}
//	if (b % 2 == 1)
//	{
//		cout << "1 " << a << endl;
//	}
//	else
//	{
//		cout << "0 " << a << endl;
//	}
//	return 0;
//}

//L1-5 判断题
//#include<iostream>
//#define M 100
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int key[M];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> key[i];
//	}
//	int corret[M];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> corret[i];
//	}
//	int student[M];
//	int score = 0;
//	for (int i = 0; i < n; i++)
//	{
//		score = 0;
//		for (int j = 0; j < m; j++)
//		{
//			cin >> student[j];
//			if (student[j] == corret[j])
//			{
//				score += key[j];
//			}
//		}
//		cout << score << endl;
//	}
//	return 0;
//}

//L1-6 检查密码
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		string s;
//		getline(cin, s);
//		if (s.size() < 6)
//		{
//			cout << "Your password is tai duan le." << endl;
//		}
//		else
//		{
//			int shuzi = 0;
//			int zimu = 0;
//			int feifa = 0;
//			int zifu = 0;
//			for (int j = 0; j < s.size(); j++)
//			{
//				if (s[j] >= 'a' && s[j] <= 'z' || s[j] >= 'A' && s[j] <= 'Z')
//				{
//					zimu++;
//				}
//				else if (s[j] == '.')
//				{
//					zifu++;
//				}
//				else if (s[j] >= '0' && s[j] <= '9')
//				{
//					shuzi++;
//				}
//				else
//				{
//					feifa++;
//				}
//			}
//			if (feifa != 0)
//			{
//				cout << "Your password is tai luan le." << endl;
//			}
//			else if (feifa == 0 && zimu == 0)
//			{
//				cout << "Your password needs zi mu." << endl;
//			}
//			else if (feifa == 0 && shuzi == 0)
//			{
//				cout << "Your password needs shu zi." << endl;
//			}
//			else
//			{
//				cout << "Your password is wan mei." << endl;
//			}
//		}
//	}
//	return 0;
//}

//L1-7 谷歌的招聘
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//bool IsPrimeNumber(string s)
//{
//	int number = 0;
//	int i = 0;
//	int j = 0;
//	for (i = s.size() - 1; i >= 0; i--)
//	{
//		number += (s[i] - '0') * pow(10, j);
//		j++;
//	}
//	if(number>=2)
//	{
//		for (i = 2; i < sqrt(number); i++)
//		{
//			if (number % i == 0)
//			{
//				break;
//			}
//		}
//		if (i > sqrt(number))
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
//	string s;
//	int L, K;
//	cin >> L >> K;
//	int i = 0;
//	int k = 0;
//	cin >> s;
//	for (i = 0; i <= L - K; i++)
//	{
//		string cur = s.substr(i, K);
//		if (IsPrimeNumber(cur))
//		{
//			cout << cur << endl;
//			return 0;
//		}
//	}
//	cout << "404" << endl;
//	return 0;
//}

//L2-1 出栈序列的合法性
//#include<iostream>
//#include<stack>
//#define N 100
//using namespace std;
//int main()
//{
//	int m, n, k;
//	cin >> m >> n >> k;
//	int StackOut[N];
//	for (int i = 0; i < k; i++)
//	{
//		stack<int> s;
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> StackOut[j];
//		}
//		if (StackOut[1] > m)
//		{
//			cout << "NO" << endl;
//			continue;
//		}
//		int k = 1;
//		for (int j = 1; j <= n; j++)
//		{
//			s.push(j);
//			if (s.top() == StackOut[k] && s.size() <= m)
//			{
//				while (!s.empty() && s.top() == StackOut[k])
//				{
//					s.pop();
//					k++;
//				}
//			}
//		}
//		if (s.empty())
//		{
//			cout << "YES" << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//	return 0;
//}

//L2-3 二叉搜索树的2层结点统计
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int num[1000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num[i];
//	}
//	if (n <= 3)
//	{
//		cout << n << endl;
//	}
//	else
//	{
//		int k = 1;
//		while (n > pow(2, k) - 1)
//		{
//			k++;
//		}
//		cout << n - pow(2, k - 1) + 1 + pow(2, k - 2) << endl;
//	}
//	return 0;
//}

//L1-8 阅览室
//#include <stdio.h>
//typedef struct Book
//{
//    int wasBorrow;
//    char operate;
//    int hour;
//    int min;
//}Book;
//int main(void)
//{
//    int days, count, times, id;
//    id = days = count = times = 0;
//    Book records[1005], temp;
//    scanf("%d", &days);
//    while (days--)
//    {
//        while (1)
//        {
//            scanf("%d %c %d:%d", &id, &temp.operate, &temp.hour, &temp.min);
//            if (0 == id)
//                break;
//            else if ('E' == temp.operate)
//            {
//                if (records[id].wasBorrow == 1)
//                {
//                    count++;
//                    times += (temp.hour - records[id].hour) * 60 + temp.min - records[id].min;
//                    records[id].wasBorrow = 0;
//                }
//            }
//            else if ('S' == temp.operate)
//            {
//                records[id] = temp;
//                records[id].wasBorrow = 1;
//            }
//        }
//        if (0 == count)
//            printf("0 0\n");
//        else
//            printf("%d %d\n", count, (int)((double)times / count + 0.5));
//        count = times = 0;
//        for (int i = 0; i < 1005; i++)
//            records[i].wasBorrow = 0;
//    }
//    return 0;
//}

//L2-2 抢红包
//#include<iostream>
//#include<algorithm>
//#include<iomanip>
//using namespace std;
//typedef struct Person
//{
//	int id;
//	int number;
//	int in;
//}Person;
//bool cmp(Person p1, Person p2)
//{
//	if (p1.in == p2.in)
//	{
//		if (p1.number == p2.number)
//		{
//			return p1.id < p2.id;
//		}
//		else
//		{
//			return p1.number > p2.number;
//		}
//	}
//	else
//	{
//		return p1.in > p2.in;
//	}
//}
//int main()
//{
//	Person p[10001];
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		p[i].id = i;
//		p[i].in = 0;
//		p[i].number = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int k = 0;
//		cin >> k;
//		int	num, p1;
//		for (int j = 0; j < k; j++)
//		{
//			cin >> num >> p1;
//			p[num].in += p1;
//			p[num].number++;
//			p[i].in -= p1;
//		}
//	}
//	sort(p + 1, p + 1 + n, cmp);
//	for (int i = 1; i <= n; i++)
//	{
//		cout << p[i].id << " " <<fixed<<setprecision(2)<< (double)p[i].in / 100 << endl;
//	}
//	return 0;
//}
