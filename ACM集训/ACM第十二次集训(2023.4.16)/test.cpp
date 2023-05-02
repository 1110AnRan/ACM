#define _CRT_SECURE_NO_WARNINGS 1

//2020年 团体程序设计天梯赛 - 总决赛
//L1-1 要废话上代码
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Talk is cheap. Show me the code." << endl;
//	return 0;
//}

//L1-2 猫是液体
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << a * b * c << endl;
//	return 0;
//}

//L1-3 洛希极限
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double a, b;
//	int c;
//	cin >> a >> c >> b;
//	double sum = 0;
//	if (c == 0)
//	{
//		sum = a * 2.455;
//	}
//	else
//	{
//		sum = a * 1.26;
//	}
//	if (sum < b)
//	{
//		cout << fixed << setprecision(2) << sum << " ^_^" << endl;
//	}
//	else
//	{
//		cout << fixed << setprecision(2) << sum << " T_T" << endl;
//	}
//	return 0;
//}

//L1-4 调和平均
//#include<iostream>
//#include<iomanip>
//#define N 1000
//using namespace std;
//int main()
//{
//	int n;
//	double arr[N];
//	while (scanf("%d",&n) != EOF)
//	{
//		int i = 0;
//		double sum = 0;
//		for (i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//			sum += 1 / arr[i];
//		}
//		if (n == 0)
//		{
//			cout << "0" << endl;
//		}
//		else
//		{
//			sum = sum / n;
//			sum = 1 / sum;
//			cout << fixed << setprecision(2) << sum << endl;
//		}
//	}
//	return 0;
//}

//L1-5 胎压监测
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	int count = 0;
//	int a, b;
//	for (i = 0; i < 4; i++)
//	{
//		cin >> arr[i];
//	}
//	cin >> a >> b;
//	int max = arr[0];
//	for (i = 1; i < 4; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	int gap[4] = { 0 };
//	int error[4] = { 0 };
//	for (i = 0; i < 4; i++)
//	{
//		gap[i] = fabs(max - arr[i]);
//		if (arr[i]<a || gap[i]>b)
//		{
//			count++;
//			error[i] = 1;
//		}
//	}
//	if (count == 0)
//	{
//		cout << "Normal" << endl;
//	}
//	else if (count == 1)
//	{
//		for (i = 0; i < 4; i++)
//		{
//			if (error[i] == 1)
//			{
//				break;
//			}
//		}
//		cout << "Warning: please check #" << i + 1 << "!" << endl;
//	}
//	else
//	{
//		cout << "Warning: please check all the tires!" << endl;
//	}
//	return 0;
//}

//L1-6 吃火锅
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string find = "chi1 huo3 guo1";
//	string s[100];
//	string out;
//	int i = 0;
//	int count = 0;
//	getline(cin, out);
//	while (out != ".")
//	{
//		s[i] = out;
//		i++;
//		getline(cin, out);
//	}
//	cout << i << endl;
//	for (int j = 0; j < i; j++)
//	{
//		int ret = s[j].find(find, 0);
//		if (ret != -1)
//		{
//			cout << j + 1 << " ";
//			break;
//		}
//	}
//	for (int j = 0; j < i; j++)
//	{
//		int ret = s[j].find(find, 0);
//		if (ret != -1)
//		{
//			count++;
//		}
//	}
//	if (count != 0)
//	{
//		cout << count;
//	}
//	else
//	{
//		cout << "-_-#";
//	}
//	return 0;
//}

//L1-7 前世档案
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n >> m;
//	string s;
//	while (m--)
//	{
//		int num = 1;
//		cin >> s;
//		for (int i = 0; i < s.length(); i++)
//		{
//			if (s[i] == 'n')
//			{
//				num += pow(2, n - 1 - i);
//			}
//		}
//		cout << num << endl;
//	}
//}

//L2-1 简单计算器
//#include<iostream>
//#include<stack>
//using namespace std;
//int main()
//{
//	stack<int> s1;
//	stack<char> s2;
//	int a;
//	char b;
//	int n = 0;
//	cin >> n;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a;
//		s1.push(a);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		cin >> b;
//		s2.push(b);
//	}
//	int n1, n2;
//	char c;
//	while (!s1.empty() && !s2.empty())
//	{
//		n1 = s1.top();
//		s1.pop();
//		n2 = s1.top();
//		s1.pop();
//		c = s2.top();
//		s2.pop();
//		if (c == '+')
//		{
//			s1.push(n2 + n1);
//		}
//		else if (c == '-')
//		{
//			s1.push(n2 - n1);
//		}
//		else if (c == '*')
//		{
//			s1.push(n2 * n1);
//		}
//		else
//		{
//			if (n1 == 0)
//			{
//				cout << "ERROR: " << n2 << "/" << n1 << endl;
//				break;
//			}
//			else
//			{
//				s1.push(n2 / n1);
//			}
//		}
//	}
//	if (s2.empty() && !s1.empty())
//	{
//		cout << s1.top() << endl;
//	}
//	return 0;
//}

