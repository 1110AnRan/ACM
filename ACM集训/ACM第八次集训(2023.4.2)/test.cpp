#define _CRT_SECURE_NO_WARNINGS 1

//L1-5 就不告诉你
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int a, b;
//	string s="0";
//	int index;
//	cin >> a >> b;
//	int m = a * b;
//	while (m)
//	{
//		s += m % 10 + '0';
//		m = m / 10;
//	}
//	if (a == 0 || b == 0)
//	{
//		cout << s[0];
//	}
//	else
//	{
//		for (int i = 1; i < s.size(); i++)
//		{
//			if (s[i] != '0')
//			{
//				index = i;
//				break;
//			}
//		}
//		for (int i = index; i < s.size(); i++)
//		{
//			cout << s[i];
//		}
//	}
//	return 0;
//}

//L1-6 WIFI密码
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//	int arr[100];
//	char ch1, ch2;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%c-%c", &ch1, &ch2);
//			getchar();
//			if (ch2 == 'T')
//			{
//				if (ch1 == 'A')
//				{
//					arr[k] = 1;
//					k++;
//				}
//				if (ch1 == 'B')
//				{
//					arr[k] = 2;
//					k++;
//				}
//				if (ch1 == 'C')
//				{
//					arr[k] = 3;
//					k++;
//				}
//				if (ch1 == 'D')
//				{
//					arr[k] = 4;
//					k++;
//				}
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i];
//	}
//	return 0;
//}

//L2-2 月饼
//#include<iostream>
//#include<iomanip>
//using namespace std;
//typedef struct Moon
//{
//	double weight;
//	double price;
//	double ave;
//}moon;
//int main()
//{
//	int n, d;
//	moon m[1000];
//	cin >> n >> d;
//	int i = 0;
//	double sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> m[i].weight;
//	}
//	for (i = 0; i < n; i++)
//	{
//		cin >> m[i].price;
//		m[i].ave = 1.0 * m[i].price / m[i].weight;
//	}
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (m[j].ave > m[j + 1].ave)
//			{
//				moon temp = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (d < m[i].weight)
//		{
//			sum += d * m[i].ave;
//			break;
//		}
//		else
//		{
//			sum += m[i].price;
//			d = d - m[i].weight;
//		}
//	}
//	cout << fixed << setprecision(2) << sum << endl;
//	return 0;
//}

//L2-4 图着色问题
//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//	int V, E, K;
//	cin >> V >> E >> K;
//	int a[550][500], b[550], c[550];
//	memset(a, -1, sizeof(a));
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int a1, a2;
//	for (i = 0; i < E; i++)
//	{
//		cin >> a1 >> a2;
//		a[a1][a2] = a[a2][a1] = 1;
//	}
//	int n = 0;
//	int sum = 0;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		int flag = 1;
//		sum = 0;
//		memset(b, -1, sizeof(b));
//		for (j = 1; j <= V; j++)
//		{
//			cin >> c[j];
//			if (b[c[j]] == -1)
//			{
//				b[c[j]] = 1;
//				sum++;
//			}
//		}
//		if (sum != K)
//		{
//			flag = 0;
//		}
//		for (j = 1; j < V; j++)
//		{
//			for (k = j + 1; k <= V; k++)
//			{
//				if (a[k][j] == 1 && c[j] == c[k])
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag == 0)
//			{
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			cout << "No" << endl;
//		}
//		else
//		{
//			cout << "Yes" << endl;
//		}
//	}
//	return 0;
//}