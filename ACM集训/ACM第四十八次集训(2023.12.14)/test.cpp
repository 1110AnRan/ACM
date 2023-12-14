

//E
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll dp[50] = { 1, 1 };
//stack <int> s;
//int main() 
//{
//	for (int i = 1; i <= 45; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	int T, n;
//	cin >> T;
//	for (; T; T--) 
//	{
//		cin >> n; 
//		cout << n << '=';
//		for (int i = 45; i >= 1; i--) 
//		{
//			while (n >= dp[i])
//			{
//				s.push(dp[i]);
//				n -= dp[i];
//			}
//			if (n == 0)
//			{
//				break;
//			}
//		}
//		while (!s.empty()) 
//		{
//			if (s.size() == 1) 
//			{
//				cout << s.top() << "\n";
//				s.pop();
//				break;
//			}
//			cout << s.top() << "+";
//			s.pop();
//		}
//	}
//	return 0;
//}



//F
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll sum = 0, x = 0, n;
//int main()
//{
//	cin >> n;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			if (x < 16)
//			{
//				sum += pow(2, 16 + x);
//			}
//			else
//			{
//				sum += pow(2, x - 16);
//			}
//		}
//		x++;
//		n /= 2;
//	}
//	cout << sum;
//	return 0;
//}


//B
//#include <bits/stdc++.h>
//using namespace std;
//int n, m;
//typedef struct Node
//{
//	int x;
//	int y;
//}Node;
//Node node[2000];
//int a[200];
//bool cmp(Node x1, Node x2)
//{
//	if (x1.x == x2.x)
//	{
//		return x1.y <= x2.y;
//	}
//	else
//	{
//		return x1.x <= x2.x;
//	}
//}
//int Find(int x)
//{
//	if (x == a[x])
//	{
//		return x;
//	}
//	return Find(a[x]);
//}
//void Union(int x, int y)
//{
//	int x1 = Find(x);
//	int y1 = Find(y);
//	if (x1 != y1)
//	{
//		a[x1] = y1;
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; ++i)
//	{
//		cin >> node[i].x >> node[i].y;
//		if (node[i].x > node[i].y)
//		{
//			swap(node[i].x, node[i].y);
//		}
//	}
//	sort(node + 1, node + 1 + m, cmp);
//	for (int i = 1; i <= m; ++i)
//	{
//		for (int j = 1; j <= n; ++j)
//		{
//			a[j] = j;
//		}
//
//		for (int j = 1; j <= m; ++j)
//		{
//			if (i != j)
//			{
//				Union(node[j].x, node[j].y);
//			}
//		}
//
//		for (int j = 2; j <= n; ++j)
//		{
//			if (Find(a[j]) != Find(a[j - 1]))
//			{
//				cout << node[i].x << " " << node[i].y << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}


//A
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int N = 100010;
//int a[N];
//int f[N];
//int b[N];
//int n;
//int main()
//{
//	while (cin >> a[n])
//	{
//		n++;
//	}
//
//	int ans = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		f[i] = 1;
//		for (int j = 0; j < i; ++j)
//		{
//			if (a[i] <= a[j])
//			{
//				f[i] = max(f[i], f[j] + 1);
//			}
//		}
//		ans = max(ans, f[i]);
//	}
//	cout << ans << endl;
//
//	int ret = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		int k = 0;
//		while (k < ret && b[k] < a[i])
//		{
//			k++;
//		}
//		b[k] = a[i];
//		if (k >= ret)
//		{
//			++ret;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}
